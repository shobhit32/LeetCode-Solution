class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0,i;
        if(nums.size()==0)
            ans=0;
        if(nums[0]==target || nums[0]>target)
            ans=0;
         for(i=1;i<nums.size();i++)
         {
             if(nums[i]==target || nums[i-1]<target&&nums[i]>target)
             {
                    ans=i;
                    break;
             }
         }
        if(nums[nums.size()-1] < target)
            ans=nums.size();
        return  ans;
    }
};
