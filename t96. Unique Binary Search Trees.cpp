#include <bits/stdc++.h>
using namespace std;

int numTrees(int n) {

    vector<int> dp(n+1,0);
    dp[0] = dp[1] = 1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            dp[i] += dp[j]*dp[i-j-1];
        }
    }

    return dp[n];
}