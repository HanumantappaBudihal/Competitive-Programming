#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
std::ostringstream vts;

/************************************************************************************************************
 *  Problem statement :
 * 
 * //Solution : My approach
 * //Time complexity  :
 * //Space complexity : 
 * 
 ************************************************************************************************************/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        //Case 1 : when last digit is <8 when , no need to worry about the carry
        if (digits[digits.size() - 1] < 8)
        {
            digits[digits.size() - 1] += 1;
            return digits;
        }

        //Case 2 : when last digit is equal to 9 , we should handle the carry
        //Logic : example : 3459 : reverse the number first
        //        9543 : Now add the 1 to first digit of the reverse arrya ,if any move the carry till end
        // Edge case : if the number is somethiing like 999 : need to add the one more itemm to the vector
        reverse(digits.begin(), digits.end());
        int carry = 1;

        for (int i = 0; i < digits.size(); i++)
        {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
        }

        if (carry > 0)
        {
            digits.insert(digits.end(), carry);
        }

        reverse(digits.begin(), digits.end());

        return digits;
    }
};

int main()
{
    int inputArrya[4] = {9, 9, 9, 9};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.plusOne(numbers);
}