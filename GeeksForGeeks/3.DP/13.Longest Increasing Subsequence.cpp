//Dynamnic programming and time complexity is O(n^2)   

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       int lis[n];
       lis[0]=1;
       
       for( int i=1;i<n;i++)
       {
           lis[i]=1;
           int max=0;
           for(int j=i-1;j>=0;j--)
           {
               if(a[j]<=a[i])
               {
                   if(max<lis[j])
                     max=lis[j];
               }
           }
           
           lis[i]+=max;
       }
       
      // for(auto item : lis)
        //cout<<item<< " ";
       return *max_element(lis, lis + n);
    
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends


// Using lower_bound function

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence
    int findCeilIndex(int a[],int l,int r,int x)
    {
       
        while(r>l)
        {
            int m=l+(r-l)/2;
            
           
            if(a[m]>=x)
            {
                r=m;
            
            }
            else
                l=m+1;
        }
        
        return r;
    }
    
    int longestSubsequence(int n, int v[])
    {
     if (n == 0) // boundary case
        return 0;

    std::vector<int> tail(n, 0);
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];

    for (int i = 1; i < n; i++) {

        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);

        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }

    return length;
    
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends