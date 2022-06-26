// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
     int zeroCount=0,onesCount=0,secondsCount=0;     
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) zeroCount+=1;
        
        if(a[i]==1) onesCount+=1;
        if(a[i]==2) secondsCount+=1;
    }
    
    int count=0;
    for(int i=0;i<zeroCount;i++)
    {
        a[count++]=0;
    }
    
    for(int i=0;i<onesCount;i++)
    {
        a[count++]=1;
    }
    
    for(int i=0;i<secondsCount;i++)
    {
        a[count++]=2;
    }
    
    }
    
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends


  //Other approach

  // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
     int zeroCount=0,onesCount=0,secondsCount=0;     
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) zeroCount+=1;
        
        if(a[i]==1) onesCount+=1;
        if(a[i]==2) secondsCount+=1;
    }
    
    for(int i=0;i<n;i++)
    {
        if(zeroCount-->0)
        {
            a[i]=0;
            continue;
        }
        
         if(onesCount-->0)
        {
            a[i]=1;
            continue;
        }
         
         
          if(secondsCount-->0)
        {
            a[i]=2;
            continue;
        }
         
            
    }
    
   
    
    }
    
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends