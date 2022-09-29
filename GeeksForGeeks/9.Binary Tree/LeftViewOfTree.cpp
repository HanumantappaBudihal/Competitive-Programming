/ //Function to return a list containing elements of left view of the binary tree.
// vector<int> leftView(Node *root)
// {
//   // Your code here
//   vector<int> ans;
//   if(root==NULL)  return ans;
//   queue<Node*> q;
//   q.push(root);
//   while(q.size()){
//       int a  = q.size();
//       for(int i=0;i<a;i++){
//           Node* curr = q.front();
//           q.pop();
//           if(i==0)  ans.push_back(curr->data);
//           if(curr->left) q.push(curr->left);
//         if(curr->right) q.push(curr->right);
           
//       }
//   }
//   return ans;
// }

void solve(Node* root, vector<int> &ans, int level) {
   // base case
   if(root == NULL)
       return ;
   
   // we entered in new level if below condition is true
   if(level == ans.size())
       ans.push_back(root -> data);
   
   solve(root -> left, ans, level + 1);
   solve(root -> right, ans, level + 1);
}
vector<int> leftView(Node *root)
{
  vector<int> ans;
  solve(root, ans, 0);
  return ans;
}

