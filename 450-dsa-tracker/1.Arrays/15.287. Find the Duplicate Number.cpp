class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       /* int sum=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i!=j)
                if(nums[i]==nums[j])
                    return nums[i];
            }
        }
        
        return ans;
        */
        
        
        //second apporach
        /*sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        
        return 0; */
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        int n=nums.size();
        
        int seriesSum=(n-1)*(n)/2;
        
        return sum-seriesSum;
        
        
    }
};