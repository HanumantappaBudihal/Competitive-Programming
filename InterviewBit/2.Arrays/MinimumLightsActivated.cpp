int Solution::solve(vector<int> &A, int B) {
    int count=0;
    int i=0;
    int n=A.size();
    
    while(i<n)
    {
        int right=min(i+B-1,n); // it might cross the n value ,so take care the value
        int left=max(i-B+1,0);//this might be -1
        bool is_buldfound=false;
        while(left<=right)
        {
            if(A[right]==1)
            {
                is_buldfound=true;
                break;
            }
            
            right--;
        }
        
        if(!is_buldfound) return -1;
        
        count++;
        
        i=right+B;
    }
    
    return count;
    
}
