vector <int> postOrder(Node* root)
{
vector<int> left, right;
if(root == nullptr)
return left;
left = postOrder(root->left);
right = postOrder(root->right);
left.insert(left.end(), right.begin(), right.end());
left.push_back(root->data);
return left;
}
