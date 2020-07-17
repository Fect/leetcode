#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSubPath(ListNode* head, TreeNode* root){
     
     if(!root){
          return false;
     }

     return judge(head,root)||isSubPath(head,root->left)||isSubPath(head,root->right);
}

bool judge(ListNode* head, TreeNode* root) {
     if(!head){
          return true;
     }
     if(!root||head->val!=root->val){
          return false;
     }

     
     if(judge(head->next,root->left)||judge(head->next,root->right)){
          return true;
     }


     return false;

}