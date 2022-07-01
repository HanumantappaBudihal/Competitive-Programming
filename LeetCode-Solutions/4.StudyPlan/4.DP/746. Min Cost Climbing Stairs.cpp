//https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
    int length=cost.size();
    int minCost[length];
    
    minCost[0]=cost[0];
    minCost[1]=cost[1];
        
    if(length < 3)
        return cost[0]<cost[1]? cost[0]:cost[1];
        
    for(int i=2;i<length;i++)
    {
        minCost[i]=cost[i]+min(minCost[i-1],minCost[i-2]);
    }
        
    return min(minCost[length-1],minCost[length-2]);
        
    };
};