// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <fstream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
// You need to complete this function


class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        long long K[number+1];
        
        K[0]=0;
        K[1]=1;
        
        for(int i=2;i<=number;i++)
        {
          K[i]=K[i-1]+K[i-2];
        }
         
    return K[number];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking testcases
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        //taking nth fibonacci 
        //to be found
        int number;
        cin>>number;
        
        //calling function findNthFibonacci()
        //and passing number as parameter
        Solution obj;
        cout<<obj.findNthFibonacci(number)<<endl;
    }
    
	return 0;
}
  // } Driver Code Ends