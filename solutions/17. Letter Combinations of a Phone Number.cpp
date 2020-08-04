class Solution {
public:
    vector<string> letterCombinations(string digits) {
         vector<vector<string> > vec{{},
                                    {},
                                    {"a","b","c"},
                                    {"d","e","f"},
                                    {"g","h","i"},
                                    {"j","k","l"},
                                    {"m","n","o"},
                                    {"p","q","r","s"},
                                    {"t","u","v"},
                                    {"w","x","y","z"} };
        int len=digits.length();
        vector<string> ans;
        if(len==0)
            return  ans;
        ans=vec[digits[0]-'0'];
        for(int i=1;i<len;i++)
        {
            if(digits[i]=='1'||digits[i]=='0')
                continue;
            vector<string> add = vec[digits[i]-'0'];
            vector<string> tempvec;
            for(string j : ans)
            {
                for(string k : add)
                    tempvec.push_back(j+k);
            }
            ans.clear();
            ans = tempvec;
        }
        return ans;
    }
};
