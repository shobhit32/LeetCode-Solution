class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size(); 
        int pos=len-1;
        for(int i=len-1;i>=0;i--)
            if(i+nums[i]>=pos)
                pos=i;
        return pos==0;
    }
};
