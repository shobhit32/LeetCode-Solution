class Solution {
public:
    string product(string str,int y)
    {
        int i=str.length()-1;
        int carry=0;
        string tmp="";
        while(i>=0)
        {
            int x=(int)(str[i]-'0');
            int prod=(x*y+carry);
            tmp=(char)(prod%10 + 48)+tmp;
            carry=(prod)/10;
            i--;
        }
        if(carry!=0)
            tmp=(char)(carry+'0')+tmp;
        return tmp;
    }
    string add(string str1,string str2)
    {
        int i=str1.length()-1;
        int j=str2.length()-1;
        int carry=0;
        string tmp="";
        while(i>=0 || j>=0)
        {
            int x=(i>=0)?(int)(str1[i]-'0'):0;
            int y=(j>=0)?(int)(str2[j]-'0'):0;
            int sum=(x+y+carry);
            tmp=(char)(sum%10 + 48)+tmp;
            carry=(sum)/10;
            if(i>=0)i--;
            if(j>=0)j--;
        }
        if(carry!=0)
            tmp=(char)(carry+'0')+tmp;
        return tmp;
    }
    string multiply(string num1, string num2) {
        string ans="";
        if(num1=="0"||num2=="0")
            return "0";
        for(int i=num2.length()-1;i>=0;i--)
        {
            string prod=(num2[i]!='0')?product(num1,(int)(num2[i]-'0')):"0";
            int zeroes=num2.length()-i-1;
            while(zeroes--)
                prod.push_back('0');
            ans=add(ans,prod);
        }
        return ans;
    }
};
