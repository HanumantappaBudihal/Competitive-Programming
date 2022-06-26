#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/883/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

class Solution1
{
public:
    bool isPalindrome(string inputString)
    {
        for (int i = 0; i < inputString.size(); i++)
        {
            if (inputString[i] < 'A' || inputString[i] > 'Z' && inputString[i] < 'a' || inputString[i] > 'z')
            {
                inputString.erase(i, 1);
                i--;
            }
        }

        //string reverseString = inputString.substr(0, inputString.size());
        string reverseString = inputString;
        reverse(reverseString.begin(), reverseString.end());

        transform(reverseString.begin(), reverseString.end(), reverseString.begin(), ::tolower);
        transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);

        return (reverseString == inputString);
    }
};

class Solution
{
public:
    bool isPalindrome(string inputString)
    {
        int startIndex = 0;
        int endIndex = inputString.size() - 1;

        while (startIndex < endIndex)
        {
            if (!isalnum(inputString[startIndex]))
                startIndex++;
            else if (!isalnum(inputString[endIndex]))
                endIndex--;
            else
            {
                if (tolower(inputString[startIndex++]) != tolower(inputString[endIndex--]))
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    string inputString = "0P";
    Solution solution;

    bool result = solution.isPalindrome(inputString);
}
