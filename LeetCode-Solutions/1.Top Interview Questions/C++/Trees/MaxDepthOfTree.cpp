
/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/555/
 *  Submission link : https://leetcode.com/submissions/detail/559743558/?from=explore&item_id=555
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/
#include <iostream>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {

        if (root == NULL)
            return 0;

        int leftTreeDepth = maxDepth(root->left);
        int rightTreeDepth = maxDepth(root->right);

        return 1 + (leftTreeDepth > rightTreeDepth ? leftTreeDepth : rightTreeDepth);
    }
};