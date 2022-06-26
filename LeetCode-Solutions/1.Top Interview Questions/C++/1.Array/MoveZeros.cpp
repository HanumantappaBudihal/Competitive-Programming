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

// My approach
class Solution1
{
public:
    vector<int> moveZeroes(vector<int> &numbers)
    {
        int zeroCount = 0;

        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] == 0)
                zeroCount++;
            else
            {
                numbers[(i - zeroCount)] = numbers[i];
            }
        }

        while (zeroCount > 0)
        {
            numbers[numbers.size() - zeroCount] = 0;
            zeroCount--;
        }

        return numbers;
    }
};

// Other solution : Better approach
class Solution
{
public:
    void moveZeroes(vector<int> &numbers)
    {
        int last = 0, current = 0;

        while (current < numbers.size())
        {
            if (numbers[current] != 0)
            {
                swap(numbers[last], numbers[current]);
                last++;
            }

            current++;
        }
    }
};

int main()
{
    int inputArrya[1] = {0};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.moveZeroes(numbers);
}