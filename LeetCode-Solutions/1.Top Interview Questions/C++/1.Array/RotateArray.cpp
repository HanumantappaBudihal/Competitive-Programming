#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/
 * 
 * //Solution : My approach
 * //Time complexity  : O(n)
 * //Space complexity : O(1)
 * 
 ************************************************************************************************************/

// My Approach
//TODO : Need to complete the problem statement
class Solution1
{
public:
    void rotate(vector<int> &numbers, int numberOfRotations)
    {
        int totalNumbers = numbers.size();
        if (numbers.empty())
            return;

        for (int i = 0; i < numberOfRotations; i++)
        {
            //TODO : will improve the swap later
            int temp;
            temp = numbers[(i + numberOfRotations) % totalNumbers];
            numbers[(i + numberOfRotations) % totalNumbers] = numbers[i % totalNumbers];
            numbers[i % totalNumbers] = temp;
        }

        for (int i = 0; i < numberOfRotations; i++)
        {
            int temp;
            temp = numbers[(i + (2 * numberOfRotations)) % totalNumbers];
            numbers[(i + (2 * numberOfRotations)) % totalNumbers] = numbers[i % totalNumbers];
            numbers[i % totalNumbers] = temp;
        }
    }
};

//THIS IS BETTER APPROACH //

/****************************************************************************************************************************
 This is a great solution, but it is weird that no one tried to prove the solution in a mathematical way in this discussion. I will try to prove its correctness, as I feel more comfortable to understand it in this way, other than a bunch of examples.

k %= nums.length; makes sure that k is less than the length of the array.
There are two parts of the array that we need to care about:

Goal1: Assume range1 = [0, n - k - 1]. Members of this range only need to move to the right by k steps. For any member i in this range, the targeted position is i + k. In other words, we need to move every member i in range1 to position i + k
Goal2: Assume range2 = [n - k, n - 1]. Members of this range will have to move beyond the boundary of the array, thus for any member i in this range, the targeted position is (i + k) % n , which is equivalent to i + k - n. In other words, we need to move every member i in range2 to position i + k - n.
For any member i, after the first reverse(...) call, its new position j will be n - i - 1.

By replacing the i in n - i - 1, we can calculate the new value of range1 from [0, n - k - 1] to [n - (n - k - 1) - 1, n - 1], which is [k, n - 1] (as range1 is reversed, its left and right bounds also need to be reversed).
The similar procedure can be applied to range2, the new range2 now becomes [0, k - 1]

For any member j in the new range2, the second reverse(...) call will assign the member j to a new position k - 1 - j. Notice that, this j is actually equal to n - i - 1, where i is the original position. So, the new position now becomes k - 1 - (n - i - 1) = k - n + i, which meets Goal2.

The similar procedure can be applied to range1, with the third reverse(...) call, which will meet Goal1. 
*****************************************************************************************************************************************/

class Solution
{
public:
    void rotate(vector<int> &numbers, int numberOfRotation)
    {
        numberOfRotation %= numbers.size();
        reverse(numbers, 0, numbers.size() - 1);
        reverse(numbers, 0, numberOfRotation - 1);
        reverse(numbers, numberOfRotation, numbers.size() - 1);
    }

    void reverse(vector<int> &numbers, int start, int end)
    {
        while (start < end)
        {
            int temp = numbers[start];
            numbers[start] = numbers[end];
            numbers[end] = temp;
            start++;
            end--;
        }
    }
};

int main()
{
    int inputArrya[7] = {1, 2, 3, 4, 5, 6, 7};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> prices(numberOfElement);
    memcpy(&prices[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.rotate(prices, 3);
}
