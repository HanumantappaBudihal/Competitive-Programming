#include<vector>
#include<string>

using namespace std;

class Solution {
public:
   string restoreString(string s, vector<int>& indices) {
        string answer=s;
        int index=0;
        for( int i=0;i< indices.size();i++)
        {
             answer[indices[i]]=s[i];
        }      
          
        return answer;
    }
};