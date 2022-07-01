// Simplest solution but the time complexity is O(n)

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
         sort(arr,arr+r+1);
        
        return arr[k-1];
        
    }

    // Better solutin 
    // Using the priority queue

    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
      priority_queue<int,vector<int>,greater<int>> data;
      
      for(int i=0;i<=r;i++)
      {
          data.push(arr[i]);
      }
      
      for(int i=1;i<=k-1;i++)
      {
          data.pop();
      }
        
    return data.top();
    }
};
};