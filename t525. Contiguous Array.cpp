#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {

    unordered_map<int,int> ma;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            nums[i] = -1;
        }
    }   
    int sum = 0;
    int res = 0;
    ma[0] = -1;     
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(ma.count(sum)){
            res = max(res,i-ma[sum]);
        }
        ma[sum] = i;
    }
    return res;
}