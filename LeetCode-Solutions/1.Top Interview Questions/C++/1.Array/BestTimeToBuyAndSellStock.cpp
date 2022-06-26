#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/
 * 
 * //Solution : My approach
 * //Time complexity  : O(n)
 * //Space complexity : O(1)
 * 
 ************************************************************************************************************/

class Solution1
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                maxProfit += prices[i] - prices[i - 1]; //TODO : Need to explain the logic
            }
        }

        return maxProfit;
    }
};

int main()
{
    int inputArrya[6] = {7, 1, 5, 3, 6, 4};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> prices(numberOfElement);
    memcpy(&prices[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution1 solution;

    solution.maxProfit(prices);
}
