#include<bits/stdc++.h>

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL) return root;
    TreeNode<int>* originalRight=root->right;
    root->right=flattenBinaryTree(root->left);
    TreeNode<int>* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->right=flattenBinaryTree(originalRight);
    root->left=NULL;
    return root;
}
