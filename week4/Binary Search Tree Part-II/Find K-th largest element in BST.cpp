#include<bits/stdc++.h>
void inorder(TreeNode<int> *root, vector<int> &vec)
{
    if(root==NULL)
        return;
    inorder(root->left,vec);
    vec.push_back(root->data);
    inorder(root->right,vec);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    vector<int>vec;
    inorder(root,vec);
    if(vec.size()<k)
    {
        return -1;
    }
    return vec[vec.size()-k];
    
    
}
