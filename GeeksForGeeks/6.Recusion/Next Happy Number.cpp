// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:

 long long getNewNumber(long long n)
    {
        int res=0;
        while(n >0)
        {
            
            res=res+pow(n%10,2);
            n=n/10;
        }
        
        return res;
        
    }
    
    bool isHappy(int n) {      
      
        
        while(n!=1)
        {
         
            long long newNumber=getNewNumber(n);
            
            if(newNumber==7)
                newNumber=getNewNumber(newNumber);
            
            if(newNumber <10 and newNumber!=1)
                return false;
            n=newNumber;
        }
        
        return true;
    }
    
    int nextHappy(int N){
        
        while(true)
        {
            bool result=isHappy(++N);
            
            if(result) return N;
        }
        
        return N;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends