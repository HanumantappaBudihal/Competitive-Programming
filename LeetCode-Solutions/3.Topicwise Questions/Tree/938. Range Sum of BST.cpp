/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum=0;
        
        if(root!=NULL)
            calSum(root,low,high);
        return sum;
    }
    
    void calSum(TreeNode* root, int low, int high) 
    {        
        if(root==NULL)
            return;
    
        if(root->val >=low && root->val <=high )
            sum+=root->val;
        
        
         calSum(root->left,low,high);
         calSum(root->right,low,high);
    }
};