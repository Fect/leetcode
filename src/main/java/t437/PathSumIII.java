package t437;

public class PathSumIII {

     public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
  }

  int path(TreeNode root,int que){
         if(root==null){
             return 0;
         }
         int res = 0;
         if(root.val==que){
             res++;
         }
         res+=path(root.left,que-root.val);
         res+=path(root.right,que-root.val);
         return res;
  }

    public int pathSum(TreeNode root, int sum) {
        int res = 0;
        if(root==null)
            return res;
        res+=pathSum(root.left,sum);
        res+=path(root,sum);
        res+=pathSum(root.right,sum);
        return res;
    }
}
