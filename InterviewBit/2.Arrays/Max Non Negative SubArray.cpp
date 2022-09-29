vector<int> Solution::maxset(vector<int> &A) {
    int i=0,maxm=0,count=0,start=0,end=-1;
    int fstart=-1,fend=-1;
    long sum=0,maxsum=0;
    int n=A.size();
    
    vector<int> result;
    if(A.size()==0) return result;
       
    while(i<n)
    {
        if(A[i]>=0)
        {
            sum+=A[i];
            count++;
            end++;
        }
        
        if(sum>maxsum)
        {
            maxsum=sum;
            fstart=start;
            fend=end;
        }
        else if(sum==maxsum && count>maxm)
        {
            maxm=count;
            fstart=start;
            fend=end;
        }
        
        if(A[i]<0)
        {
            count=0;
            start=i+1;end=i;
            sum=0;
        }
        
        i++;
    }
    
    if(fstart!=-1&&fend!=-1){
        for(int i=fstart;i<=fend;i++)
         result.push_back(A[i]);
    }
    
    return result;
}
