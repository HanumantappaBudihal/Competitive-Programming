class Solution {
public:
   static bool compare(vector<int> a, vector<int> b)
    {
        return a[0] < b[0]?true:false;
    }
      
      vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),compare);
        
        for( auto item : intervals)
        {
            
            if(ans.empty()|| ans.back()[1]<item[0])
                ans.push_back(item);
            
            else 
            {
                if(ans.back()[1]<item[1])
                      ans.back()[1]=item[1]; 
            }
         
        }
          
        return ans;
    }
};