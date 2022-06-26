#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution
{
    
public : vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int i, j;
        int count[101] = {0, 0, 0};
        for(i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        for(i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }
        for(i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                answer.push_back(0);
            else
                answer.push_back(count[nums[i] - 1]);
                
        }
        return answer;
    }
};
int main()
{
    int total_numbers;
    cin >> total_numbers;
    vector<int> input_array;
    while (total_numbers--)
    {
        int number;
        cin >> number;

        input_array.push_back(number);
    }

    Solution solution;
    vector<int> result = solution.smallerNumbersThanCurrent(input_array);
    return 0;
}