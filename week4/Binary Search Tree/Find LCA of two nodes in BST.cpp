TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
   if(root == NULL){
       return NULL;
   }
   while(root){
       if(root -> data > P->data && root->data > Q->data){
           root = root -> left;
       }
       else if(root -> data < P->data && root->data < Q->data){
           root = root -> right;
       }
       else{
           return root;
       }
   }
}
