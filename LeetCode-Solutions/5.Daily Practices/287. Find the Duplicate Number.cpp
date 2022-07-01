class Solution {
public:
    int findDuplicate_1(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++)
        {
           if(nums[i]==nums[i+1])
               return nums[i];
        }
        
        return -1;
    }
    
    int findDuplicate_2(vector<int>& nums) {        
        
        unordered_set<int> seen;
        
        for(auto &num : nums)
        {
            if(seen.count(num))
            {
                return num;
            }
            
            seen.insert(num);
        }
        
        return -1;
    }
    
     int findDuplicate_3(vector<int>& nums) {        
        
        while (nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        return nums[0];
        
        return -1;
    }
    
    int findDuplicate(vector<int>& nums)
   {
	if (nums.size() > 1)
	{
		int slow = nums[0];
		int fast = nums[nums[0]];
		while (slow != fast)
		{
			slow = nums[slow];
			fast = nums[nums[fast]];
		}

		fast = 0;
		while (fast != slow)
		{
			fast = nums[fast];
			slow = nums[slow];
		}
		return slow;
	}
	return -1;
}
    
   
};