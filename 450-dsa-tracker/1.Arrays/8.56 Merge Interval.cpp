#include <iostream>
using namespace std;

// My solution : Not working for some cases
class Solution
{

public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        vector<vector<int>> result;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= end)
            {
                if(start>intervals[i][0])
                    start=intervals[i][0];
                if (intervals[i][1]> end)
                    end = intervals[i][1];
            }
            else
            {
                std::cout << intervals[i][0];
                vector<int> items;

                items.push_back(start);
                items.push_back(end);

                result.push_back(items);

                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        vector<int> items;

        items.push_back(start);
        items.push_back(end);

        result.push_back(items);

        return result;
    }
};

//Optimal best solution 
//O(n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        
        for(auto interval : intervals)
        {
            if(result.empty() || result.back()[1]<interval[0])
               result.push_back(interval);
            else
                result.back()[1]=max(result.back()[1],interval[1]);
        }
        
        
        return result;
    }
};