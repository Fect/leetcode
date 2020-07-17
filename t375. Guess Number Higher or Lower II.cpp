#include <bits/stdc++.h>
using namespace std;

int getMoneyAmount(int n) {

    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int i=2;i<=n;i++){
        for(int j=i-1;j>=1;j--){
            int mi = INT_MAX;
            for(int k=j+1;k<i;k++){
                int tmp = k+max(dp[j][k-1],dp[k+1][i]);
                mi = min(mi,tmp);
            }
            dp[j][i] = j+1==i?j:mi;
        }
    }

    return dp[1][n];
}