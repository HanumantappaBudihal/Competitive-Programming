#include<stack>
#include<vector>

using namespace std;
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> pushedStack;
        stack<int> poppedStack;
        int index = 0;

        for (auto item : pushed)
        {
            pushedStack.push(item);

            while (!pushedStack.empty())
            {
                if (popped[index] == pushedStack.top())
                {
                    pushedStack.pop();
                    index++;
                }
                else
                    break;
            }
        }

        while (index < popped.size())
        {
            int newItem = pushedStack.top();
            pushedStack.pop();

            if (popped[index] != newItem)
                return false;

            index++;
        }

        return true;
    }
};