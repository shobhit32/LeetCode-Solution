class Solution {
public:
    vector<int>v;
    vector<vector<int>>ans;
    void helper(vector<int>& candidates,int start,int target)
    {
        if(target<0)
            return ;
        if(target==0)
        {
            ans.push_back(v);
            return ;
        }
         
        while(start < candidates.size() && target-candidates[start]>=0)
        { 
             
            v.push_back(candidates[start]);
            helper(candidates,start,target-candidates[start]);
            start++;
            v.pop_back();
        }  
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        helper(candidates,0,target);
        return ans;
    }
};
