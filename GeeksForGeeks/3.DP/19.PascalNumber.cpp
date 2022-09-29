//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
   
    
        vector<ll> getNrow(vector<ll> arr,int width)
    {
        int a=1000000007;
        vector<ll> ans(width);
        ans[0]=1;
        ans[width-1]=1;
        
        for(int i=1;i<width-1;i++)
        {
            ans[i]=(arr[i-1]%a+arr[i]%a)%a;
        }
        
        return ans;
        
    }
   vector<ll> nthRowOfPascalTriangle(int numRows) {
         int a=1000000007;
        vector<vector<ll>> result;
        vector<ll> temp(1,1);
        
        result.push_back(temp);
        
        for(int i=2;i<=numRows;i++ )
        {
            temp=getNrow(temp,i);
            result.push_back(temp);
        }
        
        return result[numRows-1];
    }
    
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends