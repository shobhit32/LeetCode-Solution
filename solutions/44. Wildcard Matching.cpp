class Solution {
public:
    bool isMatch(string s, string p) {
        int l1=s.length();
        int l2=p.length();
        if(!l1 && !l2)
            return true;
        if(!l1)
            return (p=="*")?true:false;
        if(!l2)
            return false;
        
        bool dp[l1+1][l2+1];
        dp[0][0]=true;
        int flag=0;
        for(int j=1;j<=l2;j++)
        {
            if(flag==0&&p[j-1]=='*')
                dp[0][j]=dp[0][j-1];
            else
            {
                flag=1;
                dp[0][j]=false;
            }
        }
        for(int i=1;i<=l1;i++)
            dp[i][0]=false;
        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {      
                    if(s[i-1]==p[j-1] || p[j-1]=='?')
                        dp[i][j]=dp[i-1][j-1];
                    else if(p[j-1]=='*')
                        dp[i][j]=dp[i-1][j] | dp[i][j-1];
                    else
                        dp[i][j]=false;
        
            }
        }
        return dp[l1][l2];
    }
};
