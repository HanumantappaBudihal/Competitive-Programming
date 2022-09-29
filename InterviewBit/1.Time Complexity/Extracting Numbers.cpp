long Solution::solve(string A) {
    int n = A.size();
    assert(1 <= n && n <= 1e5);
    for(char &x: A) assert(isalnum(x));
    long long ans = 0;
    for(int i = 0; i < n; ++i){
        if(!isdigit(A[i])) continue;
        string num = "";
        while(i < n && isdigit(A[i])) num += A[i++];
        ans += stoi(num);
    }
    return ans;
}