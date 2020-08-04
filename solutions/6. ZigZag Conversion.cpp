class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()==0)
            return "";
        if(s.length()==1 || numRows==1 )
            return s;
        
        int n=s.length();
        int k=0,count=0;
        int p=2*(numRows-1);
        vector< vector<char> > vec(numRows); 
        for(int i=0;i<n;i++)
        {
            vec[k].push_back(s[i]);
            count++;
            if(count % p > 0 && count % p <= p/2 )
                k++;
            else
                k--;
                
        }
        string str="";
        
        for (int i = 0; i < numRows; i++) { 
            for (int j = 0; j < vec[i].size(); j++) 
              str+=vec[i][j]; 
        }
        return str;
    }
};
