#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

class Solution
{
public:
    int reverse(int number)
    {
        long reverseNumber = 0;

        while (number != 0)
        {
            reverseNumber = reverseNumber * 10 + (number % 10);
            number = number / 10;
        }
        if (reverseNumber >= -2147483648 && reverseNumber <= 2147483647)
            return reverseNumber;

        return 0;
    }
};

int main()
{
    int inputNumber = 123;
    Solution solution;

    int reverseNumber = solution.reverse(inputNumber);
}
