class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        unordered_set<char> uset;
        int i=0,j=0,ans=0;
        while(i<len && j<len)
        {
            if(uset.find(s[j])==uset.end())
            {
                uset.insert(s[j]);
                j++;
                ans=max(ans,j-i);
            }
            else
            {
                uset.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
