class Solution {
public:
     void find(vector<int>& candidates,vector<int>&v,vector<vector<int>>&ans,int i,int n,int target)
    {
        if(target<0)return ;
        if(target==0)
        {
           ans.push_back(v);
           return;
        }
        while( i<n && candidates[i]<=target )
        {   
            v.push_back(candidates[i]);
            find(candidates,v,ans,i,n,target-candidates[i]);
            i++;
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>v;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        find(candidates,v,ans,0,n,target);
        return ans;
    }
};
​
​
​
