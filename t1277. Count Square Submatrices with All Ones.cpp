#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();

    int res = 0;
    vector<vector<int>> dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0)
                continue;
            if(i==0||j==0){
                dp[i][j] = matrix[i][j];
            }else{
                dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
            }
                res+=dp[i][j];
        }
    }
    return res;
}