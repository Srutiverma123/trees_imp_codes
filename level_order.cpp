/*
For the below tree the output will be 1 $ 2 3 $ 4 5 6 7 $ 8 $.

          1
       /     \
     2        3
   /    \     /   \
  4     5   6    7
    \
     8
*/

void levelOrder(Node* root)
{
  if(!root) return;
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(q.size()!=1) {
      root = q.front();
      q.pop();
      if(root!=NULL)
          cout<<root->data<<" ";
      else if(root==NULL) {
          cout<<"$"<<" ";
          q.push(NULL);
          continue;
      }
      
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
  }
    cout<<"$"<<" ";
}
