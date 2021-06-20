class Solution {
public:
    int minPathSum(vector<vector<int>>& v) {
        int r=v.size();
        int c=v[0].size();
        int dp[r+1][c+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==0&&j==0)
                {
                    dp[i][j]=v[i][j];
                }
                else if(i==0&&j!=0)
                {
                    dp[i][j]=dp[i][j-1]+v[i][j];
                }
                else if(i!=0&&j==0)
                {
                    dp[i][j]=dp[i-1][j]+v[i][j];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+v[i][j];
                }
            }
        }
        return dp[r-1][c-1];
    }
};