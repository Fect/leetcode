#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {

    int n = cost.size();
    vector<int> dp(n+1,0);
    dp[0] = cost[0];
    dp[1] = min(cost[1],cost[0]);

    for(int i=2;i<cost.size();i++){
        dp[i] = min(dp[i-1]+cost[i],dp[i-2]+cost[i]);
    }
    return dp[n];
}