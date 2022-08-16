 void inorder(Node* root, vector<int>& v)
     {
         if(root==NULL) return;
         
         inorder(root->left,v);
         v.push_back(root->data);
         inorder(root->right,v);
     }

    int countPairs(Node* root1, Node* root2, int x)
    {
         vector<int> l1;
         inorder(root1,l1);
         
         vector<int> l2;
         inorder(root2,l2);
                 
         reverse(l2.begin(),l2.end());
         
//          for( auto item : l1)
//             cout<<item<<" ";
            
//           cout<<endl;
//                   for( auto item : l2)
//             cout<<item<<" ";
//  cout<<endl;
         

         
         int ans=0;
         int i=0;
         int j=0;
         while(i<l1.size() and j< l2.size())
         {
             if(l1[i]+l2[j]==x) 
             {
                 //cout<<l1[i]<<"="<<l2[j]<<endl;
                 ans++;
                 i++;
                 j++;
             }
             else if (l1[i]+l2[j] > x) 
             {
                 //cout<<l1[i]<<">" <<l2[j]<<endl;
                 j++;
             }
             else 
             {
                  //cout<<l1[i]<<" < "<<l2[j]<<endl;
                 i++;
             }
             
             //cout<<l1[i]+l2[j]<<" ";
         }
         
         return ans;
    }