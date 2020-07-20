#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if(n<=0){
        return 0;
    }
    if(n==1){
        return nums[0];
    }
    vector<int> dp{nums[0],max(nums[0],nums[1])};
    for(int i=2;i<n;i++){
        dp.push_back(max(dp[i-1],dp[i-2]+nums[i]));
    }

    return dp.back();
}