#include<vector>
#include<unordered_map>

using namespace std;

//Is there any better approach to improve the code
class Solution {
public:
    
    //Using the unorder list
    int numIdenticalPairs(vector<int>& nums)
    {
        int result=0;
        unordered_map<int,int> counts;

        //Reverse moving approach
        for(int item : nums)
        {
            result+=counts[item]++;
        }

        return result;
    }

    int numIdenticalPairs(vector<int>& nums) {
        int total_number=nums.size();
        int total_pairs=0;
        
        for(int i=0;i<total_number;i++)
        {
            for(int j=i+1;j<total_number;j++)
            {
                if(nums[i]==nums[j])
                    total_pairs+=1;
            }
        }
        
        return total_pairs;
    }
};