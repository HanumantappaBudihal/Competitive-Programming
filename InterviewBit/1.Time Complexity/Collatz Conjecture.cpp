long Solution::solve( int A,  int B) {
    
    long long a=A;
    long long b=B;
    
    for(int i=1;i<b;i++)
    {
        if(a%2==0)
            a=a/2;
        else
            a=(3*a)+1;
    }
    
    return a;
}

