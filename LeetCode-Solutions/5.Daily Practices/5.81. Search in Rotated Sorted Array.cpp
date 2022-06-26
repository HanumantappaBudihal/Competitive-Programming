#include<vector>
#include<iostream>

using namespace std;

class Solution
{
public:
  vector<int> sortedSquares(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size()-1;
        vector<int> ans(nums.size());
        
        for(int i=nums.size()-1;i<nums.size();i--)
        {
            if(abs(nums[low])<abs(nums[high]))
            {
                ans[i]=nums[high]*nums[high];
                high--;
            }
            else
            {
                ans[i]=nums[low]*nums[low];
                low++;
            }
        }

        return ans;    
    }
};

int main()
{
    Solution solution;
    vector<int> input{-4,-1,0,3,10};
    auto ans= solution.sortedSquares(input);

    for(auto item : ans)
    {
       cout<<item<<" ";
   }

    return 0;
}