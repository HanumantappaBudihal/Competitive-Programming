#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int maxCandyValue = *max_element(candies.begin(), candies.end());
        vector<bool> result(candies.size(), false);

        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= maxCandyValue)
                result[i] = true;
        }

        return result;
    }
};