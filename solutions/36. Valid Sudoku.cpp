class Solution {
public:
  
    bool isValidSudoku(vector<vector<char>>& board) {
     map<string,int> checker;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string row="Row "+to_string(i)+" no is "+board[i][j] ;
                    string col="Coloumn "+to_string(j)+" no is "+board[i][j] ;
                    string box="Box "+to_string(i/3)+"-"+to_string(j/3)+" no is "+board[i][j] ;
                    if(checker.find(row)==checker.end() && checker.find(col)==checker.end() && checker.find(box)==checker.end())
                    {
                        checker[row]++;
                        checker[col]++;
                        checker[box]++;
                    }
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
