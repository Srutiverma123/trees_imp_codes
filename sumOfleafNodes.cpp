int sumOfLeafNodes(Node *root ){
     /*Your code here */
    if(root==NULL)
return 0;
else if(root->left==NULL && root->right==NULL)
{
return root->data;
}
else
{
return (sumOfLeafNodes(root->left)+sumOfLeafNodes(root->right));
}
}
