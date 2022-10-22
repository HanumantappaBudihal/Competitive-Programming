// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


//Problem statement  : https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/
int main()
{    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;       
    }
}
// } Driver Code Ends


int chocolates(int arr[], int n)
{
    int min=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(min >arr[i])
            min =arr[i];
    }
    
    return min;
    // Complete the function
    
}
