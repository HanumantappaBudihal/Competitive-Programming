 int getCount(Node *root, int l, int h)
    {
      int count=0;
      
      while(root!=NULL)
      {
          if(root->left==NULL)
          {
              if(root->data >=l&&root->data<=h)
                count++;
                
             root=root->right;
          }
          else
          {
              Node *pre=root->left;
              
              while(pre->right!=NULL && pre->right!=root)
                pre=pre->right;
                
                if(pre->right==NULL)
                {
                    pre->right=root;
                    root=root->left;
                }
                else
                {
                    pre->right=NULL;
                    if(root->data >=l&&root->data<=h)
                        count++; 
                        
                    root=root->right;
                }
                
          }
      }
      
      return count;
    }