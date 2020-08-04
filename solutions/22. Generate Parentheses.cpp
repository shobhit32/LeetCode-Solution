class Solution {
public:
    void helper(vector<string>& vec,string s,int start,int end)
    {
        if(start==0 && end==0)
        {
            vec.push_back(s);
            return ;
        }
        if(start > 0)helper(vec,s+'(',start-1,end);
        if(start<end)helper(vec,s+')',start,end-1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans,"",n,n);
        return ans;
    }
};
