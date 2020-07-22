#include <bits/stdc++.h>
using namespace std;

int minFallingPathSum(vector<vector<int>>& A) {

    int m = A.size();
    int n = A[0].size();

    vector<vector<int>> dp(m,vector<int>(n,0));

    int res = INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                dp[i][j] = A[i][j];
            }else if(i==m-1){
            
                res = min(res,dp[i][j]);
                
            }else {
                dp[i][j] = min(dp[i-1][j],min(dp[i-1][max(0,j-1)],dp[i-1][min(j+1,n-1)]))+A[i][j];

            }
    }
    }
    return res;
}