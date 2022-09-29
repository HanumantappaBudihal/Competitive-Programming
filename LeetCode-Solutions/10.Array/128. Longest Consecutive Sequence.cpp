class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        
        int gcount=0,lcount=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1  )
                lcount++;
            else if (nums[i]-nums[i-1]==0)
                lcount=lcount;
            else 
                lcount=0;
            
            if(gcount<lcount) gcount=lcount;
        }
        
        return gcount+1;
    }
};