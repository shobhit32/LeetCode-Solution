class Solution {
public:
    vector<int>ans;
    void row_fwd(vector<vector<int>>& matrix,int row,int start,int end)
    {
        for(int i=start;i<=end;i++)
            ans.push_back(matrix[row][i]);
    }
    void row_bwd(vector<vector<int>>& matrix,int row,int start,int end)
    {
        for(int i=start;i>=end;i--)
            ans.push_back(matrix[row][i]);
    }
    void col_down(vector<vector<int>>& matrix,int col,int start,int end)
    {
        for(int i=start;i<=end;i++)
            ans.push_back(matrix[i][col]);
    }
    void col_up(vector<vector<int>>& matrix,int col,int start,int end)
    {
        for(int i=start;i>=end;i--)
            ans.push_back(matrix[i][col]);
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return {};
        int rows=matrix.size();
        int cols=matrix[0].size();
         
        int rl=0,cl=0;
        int rr=rows-1,cr=cols-1;
        string status="rowfwd";
        while(rl<=rr && cl<=cr)
        {
            if(status=="rowfwd")
            {
                row_fwd(matrix,rl,cl,cr);
                rl++;
                status="coldown";
            }
            else if(status=="coldown")
            {
                col_down(matrix,cr,rl,rr);
                cr--;
                status="rowback";
            }
            else if(status=="rowback")
            {
                row_bwd(matrix,rr,cr,cl);
                rr--;
                status="colup";
