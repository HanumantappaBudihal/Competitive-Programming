int Solution::solve(vector<int> &A) {
    
    int n=A.size();
    
    int min=INT_MAX;
    int max=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(min > A[i])  min=A[i];
        
        if(max < A[i]) max=A[i];
    }
    
    return min+max;
}
