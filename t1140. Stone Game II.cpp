#include <bits/stdc++.h>
using namespace std;

int dfs(int i,int m,vector<int>& piles,vector<vector<int>>& dp){

    if(dp[i][m]!=INT_MIN){
        return dp[i][m];
    }

    if(i+2*m>=piles.size()){
        return piles[i];
    }

    for(int x=1;x<=2*m;x++){
        dp[i][m] = max(dp[i][m],piles[i]-dfs(i+x,max(m,x),piles,dp));
    }

    return dp[i][m];
}

int stoneGameII(vector<int>& piles) {

    int n = piles.size();

    vector<vector<int>> dp(n,vector<int>(n,INT_MIN));
    int m = 1;
    for(int i=n-2;i>=0;i--){
        piles[i] += piles[i+1];
    }

    return dfs(0,1,piles,dp);
}