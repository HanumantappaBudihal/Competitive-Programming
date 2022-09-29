
int multiply(int x, vector<int>& res,int res_size)
{
    int carry=0;
    
    for(int i=0;i<res_size;i++)
    {
        int prd=res[i]*x+carry;
        res[i]=prd%10;
        carry=prd/10;
    }
    
    while(carry)
    {
        res.push_back(carry%10);
        carry=carry/10;
        res_size++;
    }
    
    return res_size;
}
string Solution::solve(int n) {
    vector<int> res;

    res.push_back(1);
    
    int res_size=1;
    
    for(int i=2;i<=n;i++){
        res_size=multiply(i,res,res_size);
    }
    
    string result="";
    
    reverse(res.begin(),res.end());
    
    for(auto item : res)
        result=result+to_string(item);
        
    return result;
}
