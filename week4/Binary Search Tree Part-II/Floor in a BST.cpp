int floorInBST(TreeNode<int> * root, int X)
{
    auto curr = root;
    int ans = -1;
    
    while(curr) {
        if(curr -> val > X) {
            curr = curr -> left;
        } else {
            ans = curr -> val;
            curr = curr -> right;
        }
    }
    
    return ans;
}
