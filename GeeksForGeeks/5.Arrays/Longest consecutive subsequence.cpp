// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      
      int local_max=0;
      int max_count=0;
      if(N==1) return 1 ;
      
      vector<int> numbers;
      numbers.push_back(arr[0]);
      
      for(int i=1;i<N;i++)
      {
          int nn=numbers.size()-1;
          if(numbers[nn]!=arr[i])
            numbers.push_back(arr[i]);
      } 
      
      sort(numbers.begin(),numbers.end());
        local_max=1;
      for(int i=0;i<numbers.size()-1;i++)
      {
          if(numbers[i]==numbers[i+1]-1)
          {
              local_max++;
              
          }
          else
          {
              local_max=1;
          }
          
          if(max_count<local_max)
            max_count=local_max;
            
          //cout<< max_count<< " "<<numbers[i] << endl;;
             
      }
      
      return max_count;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends