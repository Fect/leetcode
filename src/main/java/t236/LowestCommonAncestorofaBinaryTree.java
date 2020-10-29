package t236;

public class LowestCommonAncestorofaBinaryTree {

     public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode(int x) { val = x; }
    }
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {

         if(root==p||root==q){
             return root;
         }
         if(root==null){
             return null;
         }
         TreeNode left = lowestCommonAncestor(root.left,p,q);
         TreeNode right = lowestCommonAncestor(root.right,p,q);

         if(left!=null&&right!=null){
             return root;
         }

         if(left!=null){
             return left;
         }
         if(right!=null) {
             return right;
         }
         return null;
    }
}