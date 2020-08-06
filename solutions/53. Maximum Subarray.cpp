class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len=nums.size()-1;
        int ans=nums[0];
         for(int i=1;i<=len;i++)
         {
             if(nums[i]+nums[i-1] > nums[i])
                 nums[i] += nums[i-1];
             if(ans < nums[i])
                 ans=nums[i];
         }
        return ans;
    }
};
