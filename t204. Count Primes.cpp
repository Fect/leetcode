#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    vector<bool> dp(n,true);
    int res = 0;
    for(int i=2;i<n;i++){
        if(!dp[i]){
            continue;
        }
        res++;
        for(int j=2;j*i<n;j++){
            dp[j*i]=false;
        }
    }
    return res;
}