class Solution {
public:
    int reverse(int x) {
        int n = x;
        int sum=0,ans=0;
        while(n)
        {
            int rem=n%10;
            if(sum > INT_MAX/10 || (sum==INT_MAX/10 && rem > 7))
                 return 0;
            if (sum < INT_MIN/10 || (sum == INT_MIN / 10 && rem < -8))
                return 0;
            sum = sum*10 + rem;
            n/=10;
        }
        return sum;
    }
};
