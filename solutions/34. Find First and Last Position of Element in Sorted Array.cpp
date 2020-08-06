class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i) ;
        auto it = mp.find(target);
        if(it==mp.end())
        {
             return {-1,-1};
        }
        vec.push_back(it->second[0]);
        vec.push_back(it->second[it->second.size()-1]);
        return vec;
    }
};
