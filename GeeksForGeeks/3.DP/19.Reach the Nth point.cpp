// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    //Brute force method
		int nthPoint_bruteforce(int n){
		    if(n==0 || n==1)
            return 1;
            else
            return nthPoint(n-1)+nthPoint(n-2);
		}
		
		
		int nthPoint(int n){
		  int mod = 1000000007  ;
	      vector<int> dp(n+1);
	      
	      dp[0]=1;
	      dp[1]=1;
	      
	      for(int i=2;i<=n;i++)
	      {
	          dp[i]=dp[i-1]%1000000007+dp[i-2]%1000000007;
	      }
	      
	      return dp[n]%1000000007;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends