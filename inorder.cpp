vector<int> inOrder(Node* root)
{
vector<int> ans;

if(root==NULL)
return ans;

ans=inOrder(root->left);
ans.push_back(root->data);

vector<int> ans2 =inOrder(root->right);

auto it = ans2.begin();

while(it!=ans2.end())
{
ans.push_back(*it);
it++;

}

return ans;

}
