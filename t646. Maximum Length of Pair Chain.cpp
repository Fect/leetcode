#include <bits/stdc++.h>
using namespace std;

int findLongestChain(vector<vector<int>>& pairs) {
    
    int n = pairs.size();
    vector<int> dp(n,1);
    sort(pairs.begin(),pairs.end());

    int res = 0;

    for(int i=1;i<pairs.size();i++){
        for(int j=0;j<i;j++){
            if(pairs[j][1]<pairs[i][0]){
                dp[i] = max(dp[i],dp[j]+1); 
            }
        }
        res = max(res,dp[i]);
    }

    return res;
}