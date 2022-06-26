#include<vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int forwardTrue=true;
    
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                forwardTrue=false;
                break;
            }
        }
        
        if(forwardTrue==false)
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]< nums[i+1])
                {
                    forwardTrue=false;
                    break;
                }
                
                forwardTrue=true;
            }
        }
        
        return forwardTrue;
    }
};