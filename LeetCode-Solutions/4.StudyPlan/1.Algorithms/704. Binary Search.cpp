#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        
        while(left <= right)
        {
            int middle=(left+right)/2;
            
            if(target==nums[middle])
                return middle;
            
            if(nums[middle]<target)            
                left=middle+1;                
            else                
                right=middle-1;                            
        }
        
        return -1;
    }
};