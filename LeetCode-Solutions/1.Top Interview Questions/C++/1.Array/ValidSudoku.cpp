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

//Normal Approach
class Solution1
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        for (int i = 0; i < numbers.size(); i++)
        {

            for (int j = i + 1; j < numbers.size(); j++)
            {
                if (numbers[i] + numbers[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

//Using Hash table
class Solution
{
public:
    vector<int> twoSum(vector<int> numbers, int target)
    {
        unordered_map<int, int> hash;

        for (int i = 0; i < numbers.size(); i++)
        {
            int r = target - numbers[i];
            if (hash.count(r))
                return {i, hash[r]};

            hash[numbers[i]] = i;
        }

        return {};
    }
};

int main()
{
    int inputArrya[5] = {4, 1, 2, 5, 2};

    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.twoSum(numbers, 3);
    cout<<"Hello Hanumanth";
}
