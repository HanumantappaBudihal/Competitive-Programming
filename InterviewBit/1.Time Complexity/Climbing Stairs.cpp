int climb(vector<int> &A,int p,unordered_map<int,int> &m)
{
    if(m.count(p)) return m[p];
    if(p==2||p==1) return A[p];
    if(p==0) return 0;
    m[p]=min(climb(A,p-1,m)+A[p],climb(A,p-2,m)+A[p]);
    return m[p];
}

int Solution::solve(vector<int> &A) {

    unordered_map<int,int> m;
    return climb(A,A.size()-1,m)+A[0];
}