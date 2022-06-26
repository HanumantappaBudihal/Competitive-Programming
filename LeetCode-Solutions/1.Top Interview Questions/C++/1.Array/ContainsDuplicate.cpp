#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/
 * 
 * //Solution : My approach
 * //Time complexity  :
 * //Space complexity : 
 * 
 ************************************************************************************************************/

class Solution1
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        //Sort the vector
        sort(nums.begin(), nums.end());

        //
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
                return true;
        }

        return false;
    }
};

class Solution
{
public:
    //Approach 2 :
    bool containsDuplicate(vector<int> &nums)
    {
        //Sort the vector
        sort(nums.begin(), nums.end());

        //
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
                return true;
        }

        return false;
    }
};

int main()
{
    int inputArrya[7] = {1, 2, 3, 4, 5, 6, 7};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.containsDuplicate(numbers);
}
