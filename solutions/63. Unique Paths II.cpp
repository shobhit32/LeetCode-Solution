class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(n==0 || obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]==1)
            return 0;
        int f=1;
        obstacleGrid[0][0]=1;
        for(int i=1;i<m;i++)
        {
            if(obstacleGrid[0][i]==1)
            {
                f=0;
                obstacleGrid[0][i]=f;
            }
            obstacleGrid[0][i]=f;
        }
        f=1;
        for(int i=1;i<n;i++)
        {
            if(obstacleGrid[i][0]==1)
            {
                f=0;
                obstacleGrid[i][0]=f;
            }
            obstacleGrid[i][0]=f;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                    if(obstacleGrid[i][j]==0)
                    {
                       obstacleGrid[i][j]=obstacleGrid[i-1][j] + obstacleGrid[i][j-1] ;
                    }
                    else
                        obstacleGrid[i][j]=0;
            }
        }
        return obstacleGrid[n-1][m-1];
    }
};
