#include<bits/stdc++.h>
using namespace std;

int numRollsToTarget(int d, int f, int target) {
    
    vector<vector<int>> dp(d,vector<int>(target+1));
    dp[0][0] = 0;
    for(int i=1;i<=target;i++){
        if(i<=f){
            dp[0][i] = 1;
        }else{
            dp[0][i] = 0;
        }
    }

    for(int i=1;i<d;i++){
        dp[i][0] = 0;
        for(int j=1;j<=target;j++){
            long sum = 0;
            for(int k=1;k<j&&k<=f;k++){
                sum +=(dp[i-1][j-k]%(1000000000+7));
            }
            dp[i][j] = sum%(1000000000+7);
        }
    }

    return dp[d-1][target];
}