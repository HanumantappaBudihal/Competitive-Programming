#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

/*********************************************************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3960/ * 
 * 
 *********************************************************************************************************************************************************/

//Approach1
class Solution1
{
public:
    int arrayNesting(vector<int> &numbers)
    {
        int subsetItemCount = 0;
        int index;
        for (int i = 0; i < numbers.size(); i++)
        {
            int localMax = 0;
            index = i;
            bool visited[numbers.size()];

            while (true)
            {

                if (visited[index] == true)
                    break;

                visited[index] = true;
                index = numbers[index];
                localMax++;
            }

            if (subsetItemCount < localMax)
                subsetItemCount = localMax;
        }

        return subsetItemCount;
    }
};

//Approach 2
class Solution
{
public:
    int arrayNesting(vector<int> &numbers)
    {
        size_t maxLength = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
            size_t size = 0;
            for (int k = i; numbers[k] >= 0; size++)
            {
                int number = numbers[k];
                numbers[k] = -1; // mark a[k] as visited;
                k = number;
            }

            maxLength = max(maxLength, size);
        }

        return maxLength;
    }
};

int main()
{
    //Case 1 : int inputArrya[7] = {5, 4, 0, 3, 1, 6, 2};
    //Case 2 :
    int inputArrya[3] = {0, 2, 1};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution solution;

    solution.arrayNesting(numbers);
}
