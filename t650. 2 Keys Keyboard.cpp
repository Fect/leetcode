#include <bits/stdc++.h>
using namespace std;

int minSteps(int n) {

    vector<int> dp(n+1,0);


    dp[1] = 0;
    for(int i=2;i<=n;i++){
        dp[i] = i;
        for(int j=1;j<i/2;j++){
            if(i%j==0){
                dp[i] = min(dp[i],dp[j]+i/j);
            }
        }
    }

    return dp[n];
}