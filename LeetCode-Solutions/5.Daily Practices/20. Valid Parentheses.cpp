class Solution {
public:
     bool isValid(string s) {
           
        stack<char> input;
        int lenght=s.length();
        
        for(int i=0;i<lenght;i++)
        {
            if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(input.empty())
                    return false;
                
                auto topElement=input.top();
                
                if(s[i]==')' && topElement!='(')
                    return false;
                
                if(s[i]=='}' && topElement!='{')
                    return false;
                
                if(s[i]==']' && topElement!='[')
                    return false;
                
                input.pop();
            }
            else
            {
                input.push(s[i]);
            }            
        }
        
        if(!input.empty())
            return false;
        
        return true;
    }
};
