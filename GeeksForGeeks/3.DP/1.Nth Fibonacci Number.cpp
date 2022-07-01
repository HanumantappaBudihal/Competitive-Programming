// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

//https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        if(n==1) return 0;
        
        long long int pre=0,cur=1;
        
        for(int i=2;i<=n;i++)
        {
            long long int temp=(pre+cur)%1000000007;
            pre=cur;
            cur=temp;
        }
        
        return (cur% 1000000007);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends