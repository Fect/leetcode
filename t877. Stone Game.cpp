#include <bits/stdc++.h>
using namespace std;

bool stoneGame(vector<int>& piles) {

    int n = piles.size();
    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        dp[i][i] = piles[i];
        for(int j=0;j<i;j++){
            dp[j][i] = max(piles[j]-dp[j+1][i],piles[i]-dp[j][i-1]);
        }
    }
    return dp[0][n-1]>0;
}