#include <bits/stdc++.h>
using namespace std;

bool divisorGame(int N) {
    vector<int> dp(N+1,0);
    dp[1] = 1;
    bool flag = false;
    for(int i=2;i<=N;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                if(dp[i-j]==0){
                    dp[i] = 1;
                }
            }
        }
    }
    return dp[N];

}