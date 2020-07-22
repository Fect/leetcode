#include <bits/stdc++.h>
using namespace std;

bool stoneGame(vector<int>& piles) {

    int m = piles.size();
    vector<vector<int>> dp(m,vector<int>(m,0));

    for(int i=0;i<m;i++){
        dp[i][i] = piles[i];
        for(int j=i-1;j>=0;j--){
            dp[j][i] = max(piles[j]-dp[j+1][i],piles[i]-dp[j][i-1]);
        }
    }
    return dp[0][m-1]>0;
}