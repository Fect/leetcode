#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {

    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            dp[i+1][j+1] = dp[i+1][j]+dp[i][j+1]-dp[i][j]+mat[i][j];
        }
    }

    vector<vector<int>> res(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int r1 = max(0,i-K);
            int r2 = min(m,i+K+1);
            int c1 = max(0,j-K);
            int c2 = min(n,j+K+1);

            res[i][j] = dp[r2][c2]-dp[r2][c1]-dp[r1][c2]+dp[r1][c1];
        }
    }

    return res;
}