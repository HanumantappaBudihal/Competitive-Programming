class Solution {
  public:
    const int mod=100000000;

    
    int fillingBucket(int N) {
        
        vector<int> dp(N+1,-1);
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=N;i++)
        {
            dp[i]=dp[i-1]%mod+dp[i-2]%mod;
        }
        
        return dp[N]%mod;
    }
};