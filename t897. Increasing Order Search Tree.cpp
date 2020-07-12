#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* increasingBST(TreeNode* root) {
    stack<TreeNode*> st;
    //st.push(root);

    TreeNode *ro = new TreeNode(0);
    TreeNode *s = ro;
    while(!st.empty()||root){
        while(root){
            //root = root->left;
            st.push(root);
            root = root->left;
        }
            root = st.top();
            st.pop();
            
            ro->right = root;
            ro = ro->right;

            root->left = nullptr;
            root = root->right;
        
    } 
    return s->right;       
}