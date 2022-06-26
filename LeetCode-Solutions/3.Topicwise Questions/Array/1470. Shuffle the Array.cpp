#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> answers(2 * n, 0);
        int k = 0;
        for (int i = 0, j = n; i < n && j < 2 * n; i++, j++)
        {
            answers[k++] = nums[i];
            answers[k++] = nums[j];
        }

        return answers;
    }

    //100 % - runtime
    vector<int> shuffle_2(vector<int> &nums, int n)
    {
        int start = 0;
        vector<int> ans;

        while (start < n)
        {
            ans.push_back(nums[start]);
            ans.push_back(nums[n + start]);

            start++;
        }

        return ans;
    }
};