#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

//use the Hashing for O(n)
class Solution
{
public:
    int firstUniqChar(string inputString)
    {
        unordered_map<char, int> hash;
        for (int i = 0; i < inputString.size(); i++)
        {
            hash[inputString[i]] += 1;
        }

        for (int i = 0; i < inputString.size(); i++)
        {
            if (hash.at(inputString[i]) == 1)
                return i;
        }

        return -1;
    }
};

int main()
{
    string inputString = "loveleetcode";
    Solution solution;

    solution.firstUniqChar(inputString);
}
