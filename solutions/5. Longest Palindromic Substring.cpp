class Solution {
public:
    string longestPalindrome(string s) {
        
        if (s.length() < 1) 
            return "";
        
        int len=s.length();
        int start=0,sub_len=0;
        for(int i=0;i<len;i++)
        {
            
             int len1=palincount(s,i,i);
             int len2=palincount(s,i,i+1);
             int curr_len=max(len1,len2);
             if(sub_len<curr_len)
             {
                 sub_len=curr_len;
                 if(sub_len%2==0)
                 start=i+1-sub_len/2;
                 else
                 start=i-sub_len/2;
             }
        }  
        return s.substr(start,sub_len);   
    }
private:
    int palincount(string s,int left,int right)
{
    int L = left, R = right;
    while (L >= 0 && R < s.length() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}
};
