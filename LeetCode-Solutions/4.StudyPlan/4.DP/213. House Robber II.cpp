//https://leetcode.com/submissions/detail/726215511/    

class Solution {
public:
    int rob(vector<int>& nums) {
        int length=nums.size();
        
        if(length < 2)  return length?nums[0]:0;
        
        return max(robberMax(nums,0,length-2),robberMax(nums,1,length-1));

}
private : 
    int robberMax(vector<int> &nums,int l,int r)
    {
        int pre=0,cur=0;
        
        for(int i=l;i<=r;i++)
        {
            int temp=max(pre+nums[i],cur);
            pre=cur;
            cur=temp;
        }
        
        return cur;
    }
};