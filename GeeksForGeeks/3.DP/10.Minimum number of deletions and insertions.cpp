// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string s1, string s2) 
	{ 
	    int m=s1.length();
	    int n=s2.length();
	    
	    int dp[1001][1001];
	    int max1=INT_MIN;
	    
	    for(int i=0;i<=m;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0 || j==0)
	            {
	               dp[i][j]=0;
	               continue;
	            }
	            
	            if(s1[i-1]==s2[j-1])
	            {
	                dp[i][j]=1+dp[i-1][j-1];
	                max1=max(max1,dp[i-1][j-1]);
	            }
	            else
	            {
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	                
	        }
	    }
	   
	    
	    return n+m-(2*dp[m][n]);
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends