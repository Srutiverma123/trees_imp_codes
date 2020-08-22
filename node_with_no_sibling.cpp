vector<int>v;
void print(struct Node* root){
if(!root)return;
if(root->left && !root->right)v.push_back(root->left->data);
if(root->right && !root->left)v.push_back(root->right->data);
print(root->left);
print(root->right);
}
void printSibling(Node* root)
{
//This is Recursive Solution
print(root);
sort(v.begin(), v.end());
if(v.size()==0){cout<<-1<<" ";return;}
for(int i=0;i<v.size();i++)cout<<v[i]<<" "; v.clear();}
