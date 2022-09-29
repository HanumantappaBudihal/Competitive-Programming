//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       if(nums.size()==1) return vector<long long int>(1,1);
        int size=nums.size()-1;
        
        
        vector<long long int> ans;
        
        vector<long long int> forward(size+1);
        vector<long long int> backward(size+1);
        
        forward[0]=1;
        for(int i=1;i<=size;i++) 
            forward[i]=forward[i-1]*nums[i-1];// prefix sum
         
    
        backward[size]=1;
        for(int i=size-1;i>=0;i--) 
            backward[i]=backward[i+1]*nums[i+1];//postfix sum
        
       
        
        for(int i=0;i<=size;i++)
            {
                ans.push_back(forward[i]*backward[i]);
            }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends