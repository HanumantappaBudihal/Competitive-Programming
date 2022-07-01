#include<stack>
#include<string>

using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> values;
        values.push(0);
        
        for(auto item : s)
        {
            if(item=='(')
                values.push(0);  
            else
            {
                int topValue=values.top();
                values.pop();
                
                if(topValue>0)
                {
                    values.top()+=2*topValue;
                }
                else
                {
                    values.top()+=1;
                }            
            }        
        }
        
        return values.top();        
    }
};