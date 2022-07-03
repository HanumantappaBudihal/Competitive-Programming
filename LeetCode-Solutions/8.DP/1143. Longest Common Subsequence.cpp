// Recursive solution

class Solution {
public:
    
    int lcs(string text1,string text2,int m,int n)
    {
               
        if(m==0 || n==0) return 0;
        
        if(text1[m-1]==text2[n-1])
            return 1+(lcs(text1,text2,m-1,n-1));
        else
            return max(lcs(text1,text2,m-1,n),lcs(text1,text2,m,n-1));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        return lcs( text1, text2,text1.length(),text2.length());
    }
    
    
};

//Top down approach
// 435 ms
class Solution {
public:
    
    
    int lcs(string text1,string text2,int m,int n,int dp[1001][1001])
    {
        if(dp[m][n]==-1)
        {
        
            if(m==0 || n==0) dp[m][n]=0;
        
            else
            {
            if(text1[m-1]==text2[n-1])
              dp[m][n]= 1+(lcs(text1,text2,m-1,n-1,dp));
            else
            dp[m][n] = max(lcs(text1,text2,m-1,n,dp),lcs(text1,text2,m,n-1,dp));
            }    
            }
        return dp[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length();
        int n= text2.length();
        int dp[1001][1001];
        
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<1001;j++)
            {
                
                dp[i][j]=-1;
            }
        }
        return lcs(text1, text2,m,n,dp);
    }
       
};

//Bottom up - tabulation
// 4ms
class Solution {
public:
    
    
    int lcs(string text1,string text2,int m,int n,int dp[1001][1001])
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length();
        int n= text2.length();
        int dp[1001][1001];
        
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<1001;j++)
            {
                
                dp[i][j]=0;
            }
        }
        return lcs(text1, text2,m,n,dp);
    }
       
};

