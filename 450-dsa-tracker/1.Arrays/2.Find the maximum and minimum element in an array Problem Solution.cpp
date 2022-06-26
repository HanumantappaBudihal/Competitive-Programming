// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long , long long> result;
    result.first=INT_MAX;//for min value
    result.second=INT_MIN; // for max value
    
    for(int i=0;i<n;i++)
    {
        if(result.first > a[i] )
            result.first=a[i];
        
        if(result.second < a[i])
            result.second=a[i];
    }
    
    return result;
}