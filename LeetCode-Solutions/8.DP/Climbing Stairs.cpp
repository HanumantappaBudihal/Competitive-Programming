#include<vector>
using namespace std;

class Solution {    
public:   
    int climbStairs(int n)
    {
       vector<int> dp(46,-1);
        dp[0]=1;
        dp[1]=1;
    
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};

//Solution without the extra dp vector

class Solution {
    
public:   
    int climbStairs(int n)
    {
        int first_element=1;
        int second_element=1;
        int third_element=0;        

        for(int i=2;i<=n;i++)
        {
            third_element=first_element+second_element;

            first_element=second_element;
            second_element=third_element;
        }

        return second_element;
    }
};