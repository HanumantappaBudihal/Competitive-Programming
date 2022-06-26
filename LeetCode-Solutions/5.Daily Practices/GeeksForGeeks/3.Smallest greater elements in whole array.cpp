// { Driver Code Starts
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends

int* greaterElement(int arr[], int n)
{
    int *ans=new int[n];
    vector<int> list1;
    
    for( int i=0;i<n;i++)
        list1.push_back(arr[i]);
    
    sort(list1.begin(),list1.end());
    
    for(int i=0;i<n;i++)
    {
         auto i1 = std::lower_bound(list1.begin(), list1.end(),arr[i]+1);
         
         if (i1 != list1.end()) {
             
            ans[i]=list1[i1-list1.begin()];
         } else
         {
          ans[i] =-10000000;
        }
    }
    
    return ans;
}
