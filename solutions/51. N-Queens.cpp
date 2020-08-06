class Solution {
public:
    bool canPlace(vector<string>& board,int row,int col,int n)
    {
        for(int i=0;i<row;i++)
        {
            if(board[i][col]=='Q')
                return false;
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--)
        {
            if(board[i][j]=='Q')
                return false;
        }
        for(int i=row,j=col;i>=0&&j<n;i--,j++)
        {
            if(board[i][j]=='Q')
                return false;
        }
        return true;
    }
    void solve(vector<string>& board,int row,int n,vector<vector<string>>& result)
    {
        if(row==n)
        {
            result.push_back(board);
            return ;
        }
        for(int col=0;col<n;col++)
        {
            if(canPlace(board,row,col,n))
            {
                board[row][col]='Q';
                solve(board,row+1,n,result);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board;
        string s="";
        for(int i=0;i<n;i++)
            s+='.';
        for(int i=0;i<n;i++)
            board.push_back(s);
        solve(board,0,n,result);
        return result;
    }
};
