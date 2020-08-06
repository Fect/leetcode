#include <bits/stdc++.h>
using namespace std;

int longestArithSeqLength(vector<int>& A) {

    vector<map<int,int>> dp(2002);
    int res = 0;
    for(int i=1;i<A.size();i++){
        for(int j=0;j<i;j++){
            int diss = A[i] - A[j];
            if(dp[j].find(diss)!=dp[j].end()){
                dp[i][diss] = max(dp[i][diss],dp[j][diss]+1);
            }else{
                dp[i][diss] = 1;
            }
             res = max(res,dp[i][diss]);
        } 
    }

    return res+1;
}