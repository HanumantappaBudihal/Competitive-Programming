#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

/************************************************************************************************************
 *  Problem statement :
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

class Solution1
{
public:
    int removeDuplicates(vector<int> &numbers)
    {
        if (numbers.empty() || numbers.size() == 0)
            return -1;

        int indexOne = 0;
        int duplicateIndexer = 0;

        while (duplicateIndexer < numbers.size())
        {
            if (numbers[indexOne] != numbers[duplicateIndexer])
            {
                numbers[++indexOne] = numbers[duplicateIndexer];
            }

            duplicateIndexer++;
        }

        return indexOne + 1;
    }
};

int main()
{
    int inputArrya[5] = {1, 1, 2, 3, 4};
    int numberOfElement = sizeof(inputArrya) / sizeof(inputArrya[0]);

    std::vector<int> numbers(numberOfElement);
    memcpy(&numbers[0], &inputArrya[0], numberOfElement * sizeof(int));
    Solution1 solution;

    solution.removeDuplicates(numbers);
}
