#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// void bianRoot(unordered_map<int,int>& map,TreeNode* root){

//     int cum = 0;
//     if(root){
//         cum+=root->val;
//         cum+=bian(map,root->left);
//         cum+=bian(map,root->right);
//         map[cum]++; 
//     }
// }

int bian(unordered_map<int,int>& map,TreeNode* root){

    if(!root){
        return 0;
    }
    int temV = root->val;
    temV+=bian(map,root->left);
    temV+=bian(map,root->right);
    //bianRoot(map,root);
    map[temV]++;
    return temV; 
}

vector<int> findFrequentTreeSum(TreeNode* root) {

    
    unordered_map<int,int> map;

    bian(map,root);

    vector<int> res;
    int maxt=0;
    for(auto it:map){
        if(it.second>maxt){
            res.clear();
            maxt=it.second;
            res.push_back(it.first);
        }else if(it.second==maxt){
            res.push_back(it.first);
        }
    }
    return res;
}