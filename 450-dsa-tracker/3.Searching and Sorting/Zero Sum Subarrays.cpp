//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Brute force
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
      ll ans=0;
      
      unordered_map<int,int> freq;
      
      vector<int> p(n);
      p[0]=arr[0];
      
      for(int i=1;i<n;i++)
      {
          p[i]=p[i-1]+arr[i];
      }
      
      for(int i=0;i<n;i++)
      {
          ans+=freq[p[i]];
          
          if(p[i]==0) ans++;
          
          freq[p[i]]+=1;
      }
      
      return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends