// Using the Stack method

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st1;
        stack<char> st2;

        for(int i=0;i<s.length();i++)        
            st1.push(s[i]);                    

        while(!st1.empty())
        {   
            char c1=st1.top();
            st1.pop();           
            
            char c2=NULL;
            if(!st2.empty())
                c2=st2.top();
            
            if(c2!=NULL && c1==c2) 
                st2.pop();            
            else  
                st2.push(c1);        
        }

        string result="";
        while(!st2.empty())
        {
            result+=st2.top();
            st2.pop();
        }
        return  result;
    }
};


// Using the simple strig and traverse one by one.


class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(ans.size() && ans.back() == s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        
        return ans;
    }
};