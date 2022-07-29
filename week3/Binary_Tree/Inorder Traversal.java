class Solution {
public List inorderTraversal(TreeNode root) {
List list = new ArrayList<>(); // list is created as the return type is list only
return binaryTree(root, list); // will send the root node and the empty list to binary tree function
}

public List<Integer> binaryTree(TreeNode root, List<Integer> list){
    
    if(root == null)return list;    // return list if root is empty
    // in inorder -> first traverse on left -> print node -> right 
    binaryTree(root.left, list);    // will run until it found the left most leaf node
    list.add(root.val);
    binaryTree(root.right, list);
    
    return list;
}
}
