vector<int> getLevelOrder(BinaryTreeNode<int> *root)

{

   //  Write your code here.

   vector<int> ans;

   queue<BinaryTreeNode<int>*> q;

   if(root==NULL) return ans;

   q.push(root);

   while(!q.empty()){

       BinaryTreeNode<int>* front=q.front();

       ans.push_back(front->val);

       q.pop();

       if(front->left!=NULL) q.push(front->left);

       if(front->right!=NULL) q.push(front->right);

   }

   return ans;

}
