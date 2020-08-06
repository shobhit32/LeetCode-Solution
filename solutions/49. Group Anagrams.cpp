class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size()==0)
            return {};
        map<string,vector<string>> flist;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            flist[s].push_back(strs[i]);
        }
       
        for(auto x:flist)
            ans.push_back(x.second);
        return ans;
    }
};
