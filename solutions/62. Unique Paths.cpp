class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==0 || n==0)
            return 0;
        int grid[n][m];
        //grid[0][0]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                   grid[i][j]=1;
                else
                {
                    grid[i][j]=grid[i-1][j] + grid[i][j-1];
                }
            }
        }
        return grid[n-1][m-1];
    }
};
