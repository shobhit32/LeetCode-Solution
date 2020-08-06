class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int len=nums.size();
        if(len==0)
            return ans;
        sort(nums.begin(),nums.end());
        do
        {
            ans.insert(ans.begin(),nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};
        
