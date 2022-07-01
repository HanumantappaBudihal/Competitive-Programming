#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        class Solution
        {
        public: 
            vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
            {
                vector<int> answer;
                for (int i = 0; i < nums.size(); i++)
                {
                    auto itPos = answer.begin() + index[i];                    
                    answer.insert(itPos, nums[i]);
                }

                return answer;
            }
        };
    }
};