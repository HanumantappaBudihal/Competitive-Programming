//https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        
    int length=nums.size();
    
    if(length==1) return nums[0];
    if(length==2) return max(nums[0],nums[1]);
        
    int maxCost[length];
    
    maxCost[0]=nums[0];
    maxCost[1]=max(nums[0],nums[1]);
    
    for(int i=2;i<length;i++)
    {
        maxCost[i]=max(nums[i]+maxCost[i-2],maxCost[i-1]);
    }
      
    return max(maxCost[length-1],maxCost[length-2]);
    };
};