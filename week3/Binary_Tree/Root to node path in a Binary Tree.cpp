 bool dfs(TreeNode* A, int B,vector<int>& path){

    if(!A) return false;

    path.push_back(A->val);

    if(B==A->val) return true;

    if(dfs(A->left,B,path)) return true; 

    if(dfs(A->right,B,path)) return true;

    path.pop_back();

    return false;

}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> path;

    dfs(A,B,path);

    return path;

}
