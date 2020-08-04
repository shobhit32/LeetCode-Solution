class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1=haystack.length();
        int l2=needle.length();
        if(l1==0&&l2==0)
            return 0;
        if(haystack=="")
            return -1;
        for(int i=0;i<=l1-l2;i++)
        {
            if(haystack.substr(i,l2) == needle)
                return i;
        }
        return -1;
    }
};
