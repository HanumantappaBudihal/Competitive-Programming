    // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string A) { 
        // code here
        string B=A;
    reverse(A.begin(),A.end());
    
    int m=A.length();
    int n=m;
    
    int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++)
        {
         
         for(int j=0;j<=n;j++)
         {
             if(i==0 or j==0)
             {
                 dp[i][j]=0;
\
             }
             
             else if(A[i-1]==B[j-1])
             {
                 dp[i][j]=1+dp[i-1][j-1];
             }
             else
             {
                 dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
             }
           }
        }
        

        return m-dp[m][n];
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  // } Driver Code Ends