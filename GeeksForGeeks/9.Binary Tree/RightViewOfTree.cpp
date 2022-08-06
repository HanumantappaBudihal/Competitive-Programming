// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
  
    
    void buildVector(Node * root,vector<int>& ans,int level)
    {
        if(root==NULL) return;
        
        if(ans.size()==level)
        {
            ans.push_back(root->data);            
        }
        
        buildVector(root->right,ans,level+1);
         buildVector(root->left,ans,level+1);
    }
    
    vector<int> rightView(Node* root) {
        vector<int> ans;
        buildVector(root,ans,0);
        
        return ans;
        
    }
};

