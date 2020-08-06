class Solution {
public:
    bool canPlace(vector<vector<char>>& board,int row,int col,int num)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==num)
                return false;
            if(board[i][col]==num)
                return false;
        }
        int x=row-row%3;
        int y=col-col%3;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[i+x][j+y]==num)
                    return false;
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board,int row,int col)
    {
        if(row==board.size())return true;
        if(col==board.size())return solve(board,row+1,0);
        if(board[row][col]=='.')
        {
            for(int num=1;num<=9;num++)
            {
                if(canPlace(board,row,col,(char)num+'0'))
                {
                    board[row][col]=(char)num+'0';
                    if(solve(board,row,col+1))
                        return true;
                    board[row][col]='.';   
                }
            }
            return false;
        }
        return solve(board,row,col+1);       
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
