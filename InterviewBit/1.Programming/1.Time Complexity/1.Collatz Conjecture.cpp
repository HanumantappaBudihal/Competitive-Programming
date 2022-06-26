long Solution::solve(int A, int B) {
    for(int i=1;i<B;i++)
    {
        if(A%2==0)
            A=A/2;
        else
            A=(3*A)+1;
    }
    
    return A;
}

