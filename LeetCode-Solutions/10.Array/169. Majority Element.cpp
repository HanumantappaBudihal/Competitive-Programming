class Solution {
public:
  
    int majorityElement(vector<int>& nums) {
      
    int majority;
    int count=0;
        
    for(auto num : nums)
    {
        if(count==0)
        {
            majority=num;
        }       
            count+=num==majority?1:-1;
            }
        
    return majority;
        
    }
};