// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&arr){
    //Write your code here..
     int first_buy = INT_MIN;
      int first_sell = 0;
      int second_buy = INT_MIN;
      int second_sell = 0;
       
      for(int i=0;i<arr.size();i++) {
         
          first_buy = max(first_buy,-arr[i]);//we set prices to negative, so the calculation of profit will be convenient
          first_sell = max(first_sell,first_buy+arr[i]);
          second_buy = max(second_buy,first_sell-arr[i]);//we can buy the second only after first is sold
          second_sell = max(second_sell,second_buy+arr[i]);
       
    }
     return second_sell;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}
  // } Driver Code Ends