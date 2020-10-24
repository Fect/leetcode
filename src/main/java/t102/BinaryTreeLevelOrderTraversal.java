package t102;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

public class BinaryTreeLevelOrderTraversal {

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

    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        if(root==null){
            return res;
        }
        List<TreeNode> list = new ArrayList<TreeNode>();

        list.add(root);
        while(true){
            if(list.isEmpty()){
                break;
            }
            List<TreeNode> tmp = new ArrayList<TreeNode>();
            List<Integer> intI = new ArrayList<Integer>();
            for(int i=0;i<list.size();i++){
                TreeNode tm = list.get(i);
                if(tm.left!=null){
                    tmp.add(tm.left);
                }
                if(tm.right!=null){
                    tmp.add(tm.right);
                }
                intI.add(tm.val);
            }
            list = tmp;
            res.add(intI);
        }

        return res;
    }

}
