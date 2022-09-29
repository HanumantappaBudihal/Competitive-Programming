class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global_max=INT_MIN,local_max=0;
        
        for(int i=0;i<nums.size();i++)
            {
                local_max=local_max+nums[i];
                
                if(global_max<local_max)
                {
                    global_max=local_max;
                }
                
                if(local_max<0)
                    local_max=0;
                
            }
        
            return global_max;
        
    }
};