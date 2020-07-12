#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {

    int cu = 0;
    int res = INT8_MIN;
    for(int i=0;i<nums.size();i++){
        if(cu+nums[i]<0){
            cu = nums[i];
        }else{
            cu+=nums[i];
            res = max(res,cu);
        }
    }
    return res;
}