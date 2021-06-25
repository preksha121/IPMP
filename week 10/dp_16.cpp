class Solution {
public:
    int dp[1007][1007];
    int lcs(string s,int i,int j)
    {
        if(i==j)
        {
            return 1;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(s[i]==s[j])
        {
            dp[i][j]=2+lcs(s,i+1,j-1);
        }
        else
        {
            dp[i][j]=max(lcs(s,i+1,j),lcs(s,i,j-1));
        }
        return dp[0][s.length()-1];
    }
    int longestPalindromeSubseq(string s) {
        int i;
        int j;
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<s.length();j++)
            {
                dp[i][j]=-1;
            }
        }
        return lcs(s,0,s.length()-1);
    }
};