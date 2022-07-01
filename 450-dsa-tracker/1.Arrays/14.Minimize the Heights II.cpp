

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
      sort(arr, arr+n);
      int ans=arr[n-1]-arr[0];
      
      //Lets get the max value without add or subtract
      int least=arr[0]+k; // it's least possible values
      int bigger=arr[n-1]-k; // this is max possible value with subtraction
     
      int minValue ,maxValue; // this is store the value local between two elements
      
      for(int i=0;i<n-1;i++)
      {
          minValue=min(arr[i+1]-k,least);
          maxValue=max(arr[i]+k,bigger);
          
          if(minValue<0) continue;
          else
          {
              ans=min(ans,(maxValue-minValue));
          }
      }
      
      return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends