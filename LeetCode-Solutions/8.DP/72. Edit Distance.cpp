//Brute force approach

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        
        return ed(word1,word2,m,n);
    }
    
    int ed(string s1,string s2,int m,int n)
    {
        if(m==0) return n;
        if(n==0) return m;
        
        if(s1[m-1]==s2[n-1])
            return ed(s1,s2,m-1,n-1);
        else
            return 1+min(ed(s1,s2,m,n-1),
                         min(ed(s1,s2,m-1,n),
                        ed(s1,s2,m-1,n-1)));
    }
};

//DP - Top Down approach
// 450 ms
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        
        int a[501][501];
        
        for(int i=0;i<=500;i++)
            for(int j=0;j<=500;j++)
                a[i][j]=-1;
        
        return ed(word1,word2,m,n,a);
        
    }
    
    
    
    int ed(string s1,string s2,int m,int n,int a[501][501])
    {
        if(a[m][n]==-1)
        {
        if(m==0) return n;
        if(n==0) return m;
        
        if(s1[m-1]==s2[n-1])
            a[m][n]=ed(s1,s2,m-1,n-1,a);
        else
            a[m][n]= 1+min(ed(s1,s2,m,n-1,a),
                       min(ed(s1,s2,m-1,n,a),
                        ed(s1,s2,m-1,n-1,a)));
        }
        
        return a[m][n];
    }
};


//Bottom up
// 4ms 

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++)
            dp[i][0]=i;
        
        for(int i=0;i<=n;i++)
            dp[0][i]=i;
                
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i-1][j-1],
                                 min(dp[i][j-1],dp[i-1][j]));
            }
        
        
        return dp[m][n];
    }
    
    
    
   /* int ed(string s1,string s2,int m,int n,int a[501][501])
    {
        if(a[m][n]==-1)
        {
        if(m==0) return n;
        if(n==0) return m;
        
        if(s1[m-1]==s2[n-1])
            a[m][n]=ed(s1,s2,m-1,n-1,a);
        else
            a[m][n]= 1+min(ed(s1,s2,m,n-1,a),
                       min(ed(s1,s2,m-1,n,a),
                        ed(s1,s2,m-1,n-1,a)));
        }
        
        return a[m][n];
    } */
};