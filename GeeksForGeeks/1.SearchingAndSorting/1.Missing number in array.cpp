
// Problem statement : https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/

#include<bitsstdc++.h>
using namespace std;

class Solution{
  public:
    
    //Sum approach
     int MissingNumber(vector<int>& array, int n) {
        int totalSum=(n*(n+1))/2;
        
        
        for(int i=0;i<array.size();i++)
        {
            totalSum-= array[i];
        }
        
        return totalSum;
    }
    // Index approach
    int MissingNumber_approach1(vector<int>& array, int n) {
        int number[n];
        memset(number,-1,sizeof(number));
        
        for(int i=0;i<array.size();i++)
        {
            number[array[i]-1]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            if(number[i]==-1)
                return i+1;
        }
        
        return 0;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends