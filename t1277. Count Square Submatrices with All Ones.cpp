#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& matrix) {

    int res = 0;
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> dp(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0||j==0){
                dp[i][j] = matrix[i][j];
            }else{
                if(matrix[i][j]==1){
                    dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
                }
            }
            res+=dp[i][j];
        }
    }
    return res;
}