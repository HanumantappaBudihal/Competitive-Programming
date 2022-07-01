#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        encoded.insert(encoded.begin(),first);
       
        for(int i=1;i<encoded.size();i++)
        {
            encoded[i] = encoded[i] xor  encoded[i-1];
        }
        
        return encoded;
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
    // vector<int> result = solution.decode(input_array);
    return 0;
}