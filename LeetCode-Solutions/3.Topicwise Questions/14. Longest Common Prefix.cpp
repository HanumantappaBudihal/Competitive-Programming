class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        int count=strs.size();
        
        if(count==0)
            return "";
        
        sort(strs.begin(),strs.end());
        
        //Take the first and last string from the list and compare these to , 
        // reason is only these two can max difference
        
        string firstItem=strs[0];
        string lastItem=strs[strs.size()-1];
        
        for(int i=0;i<firstItem.size();i++)
        {
            if(firstItem[i]==lastItem[i])
            {
                prefix+=firstItem[i];
            }
            else
            {
                break;
            }
        }
            
        return prefix;
    }
};