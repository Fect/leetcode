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

vector<TreeNode*> generateTrees(int n) {
    if(n<=0)
        return {};
    
    return help(1,n);
}

vector<TreeNode*> help(int start,int end){
    if(start>end)
        return {nullptr};
    vector<TreeNode*> res;
    for(int i=start;i<=end;i++){
        auto left = help(start,i-1);
        auto right = help(i+1,end);
        for(auto a:left){
            for(auto b:right){
                TreeNode *root = new TreeNode(i);
                root->left = a;
                root->right = b;
                res.push_back(root);
            }
        }
    }
    return res;
}