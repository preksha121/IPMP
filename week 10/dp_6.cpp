class Solution {
public:
        int fillDp(vector<vector<char>>& matrix,vector<vector<int>> &dp,int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || matrix[i][j] == '0') return  0;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = 1+min(fillDp(matrix,dp,i-1,j,n,m),min(fillDp(matrix,dp,i,j-1,n,m),fillDp(matrix,dp,i-1,j-1,n,m)));
    }
  //  }
    int maximalSquare(vector<vector<char>>& M) {
        int i,j;
        int R=M.size();
        int C=R;
    int S[R][C];
    int max_of_s, max_i, max_j;
    for(i = 0; i < R; i++)
        S[i][0] = M[i][0]-'0';
    for(j = 0; j < C; j++)
        S[0][j] = M[0][j]-'0';
    for(i = 1; i < R; i++)
    {
        for(j = 1; j < C; j++)
        {
            if(M[i][j] == '1')
                S[i][j] = min(S[i][j-1],min( S[i-1][j],
                                S[i-1][j-1])) + 1;
            else
                S[i][j] = 0;
        }
    }
    max_of_s = S[0][0]; max_i = 0; max_j = 0;
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            if(max_of_s < S[i][j])
            {
                max_of_s = S[i][j];
                max_i = i;
                max_j = j;
            }
        }            
    }
        return max_of_s*max_of_s;
 
    }
};