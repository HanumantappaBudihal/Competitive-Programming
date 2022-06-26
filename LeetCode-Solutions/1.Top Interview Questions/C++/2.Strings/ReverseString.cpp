#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/
 * 
 * //Solution         : 
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

//Normal Approach : using the library methods
class Solution1
{
public:
    vector<int> reverseString(vector<int> inputString)
    {
        reverse(inputString.begin(), inputString.end());
    }
};

//Without library
class Solution
{
public:
    void reverseString(vector<char> inputString)
    {
        for (int i = 0, j = inputString.size() - 1; i < j; i++, j--)
        {
            char temp = inputString[i];
            inputString[i] = inputString[j];
            inputString[j] = temp;
        }
    }
};

int main()
{
    char inputString[5] = {'h', 'e', 'l', 'l', 'o'};

    int numberOfElement = sizeof(inputString) / sizeof(inputString[0]);

    std::vector<char> string(numberOfElement);
    memcpy(&string[0], &inputString[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.reverseString(string);
}
