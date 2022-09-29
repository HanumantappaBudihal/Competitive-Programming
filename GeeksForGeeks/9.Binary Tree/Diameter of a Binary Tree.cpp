
    int height(Node* root,int& ans)
    {
        if(root==NULL)
         return 0;
        
        int left_height=height(root->left,ans);
        int right_hieght=height(root->right,ans);
        
        ans=max(ans,1+left_height+right_hieght);
        
        return 1+max(left_height,right_hieght);
    }
    // Function to return the diameter of a Binary Tree.
    // Compute the diameter of binary tree with given root
    int diameter(Node* root) {
        if(root==NULL)
            return 0;
        
        int ans=INT_MIN;
        
        height(root,ans);
        
        return ans;
    }