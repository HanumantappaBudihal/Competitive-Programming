class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int,int> mp;// value, i index
        for(int i=0;i<nums.size();i++)
        {
           if(mp.find(nums[i])!=mp.end())
           {
              if(abs(mp[nums[i]]-i) <=k)
              {
                 // cout<<mp[nums[i]]<<endl;
                  return true;
              }
                
               else
                   mp[nums[i]]=i;
           }
          else
          {
              mp[nums[i]]=i;
          }
        }
        
        return false;
    }
};