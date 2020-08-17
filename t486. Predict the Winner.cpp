#include<bits/stdc++.h>
using namespace std;

bool PredictTheWinner(vector<int>& nums) {

    int n = nums.size();
    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){
            dp[i][j] = max(nums[i]-dp[i+1][j],nums[j]-dp[i][j-1]);
        }
    }

    return dp[0][n-1];
}