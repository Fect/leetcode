#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    if(n<=0){
        return 0;
    }
    int res = nums[0];
    int cur = nums[0];
    for(int i=1;i<n;i++){
        if(cur+nums[i]<nums[i]){
            cur = nums[i];
        }else{
            cur+=nums[i];
        }
        res = max(cur,res);
    }

    return res;
}