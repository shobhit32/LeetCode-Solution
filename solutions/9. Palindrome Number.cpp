class Solution {
public:
    bool isPalindrome(int x) {
        int sign =(x>0)?1:-1;
        if(sign == -1 && x!=0)
            return false;
        int n=x,sum=0;
        while(n!=0)
        {
            int rem =n%10;
            if (sum >  INT_MAX / 10 || (sum == INT_MAX / 10 && rem  > 7))
                return false;
            sum =sum*10 +rem;
            n /= 10;
        }
        if(x == sum)
            return true;
        else
            return false;
    }
};
