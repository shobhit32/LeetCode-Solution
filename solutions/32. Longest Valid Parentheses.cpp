class Solution {
public:
    int longestValidParentheses(string s) {
         int len = s.length();
        if(len==0) return 0;
        int dp[len+1];
        dp[0]=0;
        for(int i=0;i<len;i++)
        {
            int j = i-dp[i]-1;
            if(s[i]=='(' || j<0)
                dp[i+1] = 0;
            else if(s[i]==')' && s[j]=='(')
                dp[i+1]=dp[i]+dp[j]+2;
            else
                dp[i+1]=0;
        }
        auto ans=max_element(dp,dp+len+1);
        return *ans;
    }
};
