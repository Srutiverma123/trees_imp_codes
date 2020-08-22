/*
Given a binary tree, find its height.

??Example 1:

Input:
      1
    /  \
   2    3
Output: 2
*/

int height(Node* node)
{
   // Your code here
   if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = height(node->left);  
        int rDepth = height(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }
}
