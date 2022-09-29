// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    if(n==0) return 0;
	    
	    vector<int> tail(n,0);
	    tail[0]=arr[0];
	    int len=1;
	    
	    for(int i=1;i<n;i++)
	    {
	        if(tail[len-1]<arr[i])
	        {
	            tail[len++]=arr[i];
	        }
	        else
	        {
	            auto it=lower_bound(tail.begin(),tail.begin()+len,arr[i]);
	            *it=arr[i];
	            
	        }
	        
	    }
	    
	    return n-len;
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends