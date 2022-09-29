int getCount(Node* root)
{
    int count=0;
    
    while(root!=NULL)
    {
        if(root->left==NULL)
        {
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
                root=root->right;
                count++;
            }
        }
    }
  
    return count;
}

float getMedian(Node* root, int n)
{
    int count=0;
    Node *prev;
    
    while(root!=NULL)
    {
        if(root->left==NULL)
        {
              count++;
            //odd case
            if(n%2==1)
            {
                if(count==(n+1)/2) return root->data;
            }
            else
            {
                if(count==(n/2)+1) return (prev->data+root->data)/(float)2;
            }
            prev=root;
          
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
                  count++;
            pre->right=NULL;
            if(n%2==1)
            {
                if(count==(n+1)/2) return root->data;
            }
            else
            {
                if(count==(n/2)+1) return (prev->data+root->data)/(float)2;
            }
           
            prev=root;
            root=root->right;
          
            }
        }
    }
  
    return 0;
}