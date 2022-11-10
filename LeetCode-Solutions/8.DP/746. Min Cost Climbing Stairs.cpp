
//Navtive Approach  - using the only recursion

class Solution {
public:

    int min_value(vector<int> cost,int n)
    {
        if(n<=1) return cost[n];       
    
        return cost[n]+(min(min_value(cost,n-1),min_value(cost,n-2)));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        return min(min_value(cost,cost.size()-1),min_value(cost,cost.size()-2));
    }
};

// Using the top down approach

class Solution {
public:
    vector<int> dp;
    int min_value(vector<int> cost,int n)
    {
        if(n<=1) return cost[n];       

        if(dp[n]==-1) 
            dp[n]=cost[n]+(min(min_value(cost,n-1),min_value(cost,n-2)));

        return dp[n]; 
    }

    int minCostClimbingStairs(vector<int>& cost) {
        dp=vector(cost.size()+1,-1);
        return min(min_value(cost,cost.size()-1),min_value(cost,cost.size()-2));
    }
};

// Iterative using the dp approach - Bottom up approach

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int length=cost.size();
        vector<int> dp(length,-1);

        dp[0]=cost[0];
        dp[1]=cost[1];

        for(int i=2;i<length;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }

        return dp[length-1];
    }
};


// Better approach

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        ios_base::sync_with_stdio(false);
        int length=cost.size();
        int first =cost[0];
        int second =cost[1];
        int third;

        for(int i=2;i<length;i++)
        {
            third=cost[i]+min(first,second);
            first=second;
            second=third;
        }

        return min(first,second);
    }
};
