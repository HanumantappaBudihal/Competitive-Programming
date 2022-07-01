// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    // brute force
    int getPairsCount_bruteforce(int arr[], int n, int k) {
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==k)
                count++;
            }
        }
        
        return count;
    }
    
    //Using hash table 
    
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        
        unordered_map<int,int> map;
        
        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(map[k-arr[i]]>0)
            {
                map[arr[i]]--;
                count+=map[k-arr[i]];
            }
            
        }
        
        return count;
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends