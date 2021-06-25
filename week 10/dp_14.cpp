int longestCommonSubsequence(string t1, string t2) {
        int dp[t1.length()+1][t2.length()+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=t1.length();i++)
        {
            for(int j=1;j<=t2.length();j++)
            {
                if(t1[i-1]==t2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    int o1=dp[i-1][j];
                    int o2=dp[i][j-1];
                    dp[i][j]=max(o1,o2);
                }
            }
        }
        return dp[t1.length()][t2.length()];
        
        
    }