class Solution {
public:
    bool isValid(string s) {
     int len=s.length();
        string str=" ";
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                str=s[i]+str;
            else
            {
                if((str[0]=='(' && s[i]==')') || (str[0]=='[' && s[i]==']') || (str[0]=='{' && s[i]=='}'))
                    str.erase(0,1);
                else
                    return false;
            }
        }
        if(str == " ")
            return true;
        else
            return false;
    }
};
