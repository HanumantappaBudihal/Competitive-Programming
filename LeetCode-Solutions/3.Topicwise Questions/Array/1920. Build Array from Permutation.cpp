#include <vector>
using namespace std;
class Solution
{
public:
    // Good Logic : Explination : https://leetcode.com/problems/build-array-from-permutation/discuss/1763311/C%2B%2B-sol.-with-explanation-or-O(1)-space-or-O(n)-time
    vector<int> buildArray(vector<int> &numbers)
    {
        int size = numbers.size();
        for (int i = 0; i < size; i++)
            numbers[i] += (numbers[numbers[i]] % size) * size;

        for (int i = 0; i < size; i++)
            numbers[i] /= size;

        return numbers;
    }

    // with extra arrya
    vector<int> buildArray_withExtraSpace(vector<int> &numbers)
    {

        vector<int> ans(numbers.size(), 0);
        for (int i = 0; i < numbers.size(); i++)
        {
            ans[i] = numbers[numbers[i]];
        }

        return ans;
    }
};
