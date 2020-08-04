class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int len=strs.size();
        if(len == 0)
            return s;
        else if(len == 1)
            return strs[0];
        s=strs[0];
        for(int i=1;i<len;i++)
        {
            int j=0;
            while(s[j]==strs[i][j] && j < strs[i].length())
            {
                j++;
            }
            int l=s.length();
            if(s != "")
               s.erase(j,l-j);
            else
                break;
        }
        return s;
    }
};
