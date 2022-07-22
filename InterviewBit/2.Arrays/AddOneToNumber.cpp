vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(),A.end());
    int carry=1;
    
    for(int i=0;i<A.size();i++)
    {
        int prod=A[i]+carry;
        A[i]=prod%10;
        carry=prod/10;
    }
    
    while(carry)
    {
        A.push_back(carry%10);
        carry=carry/10;
    }
    
    while(A[A.size()-1]==0)
    {
        A.pop_back();
    }
   
    reverse(A.begin(),A.end());

   return A;   
}
