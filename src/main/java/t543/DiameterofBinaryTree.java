package t543;

import com.sun.xml.internal.ws.encoding.MtomCodec;

public class DiameterofBinaryTree {

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


    int res = 0;
    public int help(TreeNode root){

         if(root==null){
             return 0;
         }
        int lenLeft = help(root.left);
        int lenRig = help(root.right);
        res = Math.max(res,lenLeft+lenRig);
        return Math.max(lenLeft,lenRig)+1;

    }

    public int diameterOfBinaryTree(TreeNode root) {
        if(root==null)
            return 0;
         int lenLeft = help(root.left);
         int lenRig = help(root.right);
         res = Math.max(res,lenLeft+lenRig);
         return res;

    }
}
