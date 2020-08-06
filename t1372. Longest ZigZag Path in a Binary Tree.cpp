#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDep = 0;

void dfs(TreeNode* root,bool isLeft,int depth){

    if(!root){
        return 0;
    }
    maxDep = max(maxDep,depth);
    if(isLeft){
        dfs(root->left,false,depth+1);
        dfs(root->right,true,1);
    }else{
        dfs(root->right,true,depth+1);
        dfs(root->left,false,1);
    }
}

int longestZigZag(TreeNode* root) {
    dfs(root,true,0);
    dfs(root,false,0);

    return maxDep;
}