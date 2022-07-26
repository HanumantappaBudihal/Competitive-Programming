class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> result(0,-1);        
   
     int low=0,high=nums.size()-1;
        
     while(low<=high)
     {
      if(nums[low]==target && nums[high]==target)
      {
          result.push_back(low);
          result.push_back(high);
          break;
      }
         
      if(nums[low]!=target) low++;   
      if(nums[high]!=target) high--;
        
     
     }    
        
    if(low > high)
    {
        result.push_back(-1);
        result.push_back(-1);
    }    
    
      
    return result;
    }
};