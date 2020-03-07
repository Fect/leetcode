#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class FindElements {
unordered_set<int> se;
public:
    void recover(TreeNode* root){
        if(root->val==-1){
            root->val=0;
            se.insert(root->val);
        }
        if(root->left){
            root->left->val = 2*root->val+1;
            se.insert(root->left->val);
            recover(root->left);
        }
        if(root->right){
            root->right->val = 2*root->val+2;
            se.insert(root->right->val);
            recover(root->right);
        }
    }
    FindElements(TreeNode* root) {
        recover(root);
    }
    
    bool find(int target) {
        if(se.count(target)){
            return true;
        }
        return false;
    }
};