public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string S1, string S2)
    {
         int dp[1001][1001];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                    continue;
                }
                
                if(S1[i-1]==S2[j-1])
                {
                    
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return dp[n][m];
    }
