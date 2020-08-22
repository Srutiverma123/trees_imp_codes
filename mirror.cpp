//mirror of binary tree

void mirror(Node* node)
{
if(node==NULL)
{
return;
}
else
{
mirror(node->left);
mirror(node->right);
Node *temp = node->left;
node->left = node->right;
node->right = temp;
}
}

/*
check if 2 trees are mirror of each other

int areMirror(Node* a, Node* b) {

if(a == b && a == NULL)
return 1;

if(a && b && a->data == b->data)
return (areMirror(a->left, b->right) && areMirror(a->right, b->left));

return 0;

}
*/
