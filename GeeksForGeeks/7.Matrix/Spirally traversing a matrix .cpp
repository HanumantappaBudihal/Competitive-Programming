// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
     int left=0,top=0,right=matrix[0].size()-1,bottom=matrix.size()-1;
        //cout<<right<<" "<<bottom;
        vector<int> result;
        
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
                result.push_back(matrix[top][i]);
            
            top++;
            
            for(int i=top;i<=bottom;i++)
                result.push_back(matrix[i][right]);
            
            right--;
            
            if(top<=bottom)
            {
               for(int i=right;i>=left;i--)
            {
              result.push_back(matrix[bottom][i]);            
              
            }  
                 bottom--; 
            }
           
                
            
            if(left<=right) 
            {
                for(int i=bottom;i>=top;i--)
                {
                     result.push_back(matrix[i][left]);
                }    
                
                left++;             
            }
            
        }       
        
        return result;        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends