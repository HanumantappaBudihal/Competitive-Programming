#include<vector>

using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> answer;
 
        for(int i=0;i<nums.size();)
        {
            for( int j=0;j<nums[i];j++)
            {
                answer.push_back(nums[i+1]);
            }
            
            i=i+2;
        }

        return answer;
    }

    //Other approach
    vector<int> decompressRLElist_1(vector<int>& nums) {
        vector<int> output;int freq =0;
        for(int i=0; i<nums.size()-1;i=i+2)
        {
            freq = nums[i];
            while(freq>0)
            {
                output.push_back(nums[i+1]);
                freq--;
            }
        }
        return output;
    }
};