int Solution::maxSubArray(const vector<int> &A) {
    
    if(A.size()==0) return 0;
    int local_sum=0;
    int global_sum=A[0];
    
    for(int i=0;i<A.size();i++)
    {
        local_sum+=A[i];
        
        if(global_sum<local_sum)
        {
            global_sum=local_sum;
        }
        
        if(local_sum<0)
            local_sum=0;
    }
    
    return global_sum;
}

