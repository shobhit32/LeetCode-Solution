class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ')
                s.pop_back();
            else
                break;
        }
        int ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
                ans++;
            else
                break;
        }
        return ans;
    }
};
