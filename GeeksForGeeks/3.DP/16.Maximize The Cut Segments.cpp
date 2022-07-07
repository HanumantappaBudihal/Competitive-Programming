//Brute force method


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        if(n<0) return -1;
        
        if(n==0) return 0;
        
        int res=max(max(maximizeTheCuts(n-x,x,y,z),maximizeTheCuts(n-y,x,y,z)),maximizeTheCuts(n-z,x,y,z));
        
        if(res==-1)
        return res;
        else
         return res+1;
    }
};

// { Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}  // } Driver Code Ends