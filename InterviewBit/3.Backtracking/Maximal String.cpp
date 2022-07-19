string mx = "";
void rec(string A, int B){
    if(B==0)    return ;
    
    string s=A;
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[j]>A[i]){
                char t = A[j];
                A[j]=A[i];
                A[i]=t;
                if(A>mx) mx=A;
                
                rec(A,B-1);
                
                t = A[j];
                A[j]=A[i];
                A[i]=t;
            }
        }
    }
}
string Solution::solve(string A, int B) {
    mx="";
    rec(A,B);
    return mx;
}