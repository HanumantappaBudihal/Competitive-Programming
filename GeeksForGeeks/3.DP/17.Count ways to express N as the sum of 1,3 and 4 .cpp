// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  long long int DP[100000];
  public:
    long long countWays(int n) {
        // code here
        if(n<0) return 0;
        if(n==0) return 1;
        
        if(DP[n]!=0)
            return DP[n];
        
        return DP[n]=(countWays(n-1)%1000000007 +countWays(n-3)%1000000007+countWays(n-4)%1000000007)%1000000007;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends