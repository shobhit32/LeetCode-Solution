class Solution {
public:
    bool canPlace(vector<string>& board,int row,int col,int n)
    {
       //Column check
       for(int i=0;i<row;i++)
       {
           if(board[i][col]=='Q')
               return false;
       }
        //Right diagonal
        for(int i=row,j=col;i>=0&&j<n;i--,j++)
        {
            if(board[i][j]=='Q')
                return false;
        }
        //Left diagonal
         for(int i=row,j=col;i>=0&&j>=0;i--,j--)
        {
            if(board[i][j]=='Q')
                return false;
        }
        return true;
    }
    void NQueen(vector<string>& board,int row,int n,vector<vector<string>>& result)
    {
         if(row==n)
             result.push_back(board);
        
        for(int col=0;col<n;col++)
        {
            if(canPlace(board,row,col,n))
            {
                board[row][col]='Q';
                NQueen(board,row+1,n,result);
                board[row][col]='.';
            }
        }
        
    }
    int totalNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board;
        string s="";
        for(int i=0;i<n;i++)
            s+='.';
        for(int i=0;i<n;i++)
            board.push_back(s);
        NQueen(board,0,n,result);
        return result.size();
            
    }
};
