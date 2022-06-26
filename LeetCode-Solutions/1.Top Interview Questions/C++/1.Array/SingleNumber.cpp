#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int singleNumber = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            singleNumber ^= nums[i];
        }

        return singleNumber;
    }
};

int main()
{
    int inputArrya[5] = {4, 1, 2, 1, 2};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    int exectedResult = solution.singleNumber(numbers);
}
