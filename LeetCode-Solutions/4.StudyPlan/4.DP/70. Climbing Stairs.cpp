//https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    //brute force apporach
    
    int climbStairs_version1(int n) {
        if(n==0 || n==1)
            return 1;
        else
            return climbStairs(n-1)+climbStairs(n-2);
    }
    
    int climbStairs(int n)
    {
        if(n<2) return 1;
        
        int stairs[n+1];
        stairs[0]=1;
        stairs[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            stairs[i]=stairs[i-1]+stairs[i-2];
        }
        
        return stairs[n];
    }
};