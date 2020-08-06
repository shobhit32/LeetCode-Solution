class Solution {
public:
    int binary_search(vector<int>& nums,int low,int high,int target)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<nums[high])
            {
                if(target<=nums[high] && target>nums[mid])
                    low=mid+1;
                else
                    high=mid-1;
            }
            else
            {
                if(target>=nums[low]&&target<nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }        
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       if(nums.size()==0)
           return -1;
        return binary_search(nums,0,nums.size()-1,target);
    }
};
