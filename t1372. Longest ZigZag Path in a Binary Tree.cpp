#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxStep = 0;

void dfs(TreeNode* root,bool isLeft,int step){
    if(!root){
        return;
    }
    maxStep = max(maxStep,step);
    if(isLeft){
        dfs(root->left,false,step+1);
        dfs(root->right,true,1);
    }else{
        dfs(root->right,true,step+1);
        dfs(root->left,false,1);
    }
}

int longestZigZag(TreeNode* root){
    dfs(root,true,0);
    dfs(root,false,0);

    return maxStep;
}