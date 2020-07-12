#include<bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

    int n = nums.size();
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        int in = index[i];
        res.insert(res.begin()+in,nums[i]);
    }
    return res;
}