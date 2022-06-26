// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// This is with using the extra space

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
        vector<int> result;
        
        for(int i=0;i<n;i++)
            result.push_back(arr1[i]);
        
        for(int i=0;i<m;i++)
            result.push_back(arr2[i]);
        
        sort(result.begin(),result.end());
        
       int counter=0;
       for(int i=0;i<n;i++)
            arr1[i]=result[counter++];
        
        for(int i=0;i<m;i++)
            arr2[i]=result[counter++];
        
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends


// Without using the extra space - It's execding the time ( need to improve the time complexity)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void merge(int arr1[], int arr2[], int n, int m) {
    
      for(int i=m-1;i>=0;i--)
      {
        int j, last=arr1[n-1];
       for( j=n-2;j>=0 && arr1[j]>arr2[i];j--)
       {
           arr1[j+1]=arr1[j];
       }
       
       if(j!=n-2 || last > arr2[i] )
       {
           arr1[j+1]=arr2[i];
           arr2[i]=last;
       }
      }
      
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends