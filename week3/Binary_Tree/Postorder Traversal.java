class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
      List<Integer> list = new ArrayList<>();
        
        helper(root,list);
        return list;
    }
    public static List<Integer> helper(TreeNode root,List<Integer> list)
    {
        if(root==null)
            return list;
        
        helper(root.left,list);
        helper(root.right,list);
        list.add(root.val);
        return list;
    }
}
