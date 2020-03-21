#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
    int m = mat.size();
    int n = mat[0].size();
    for(int i=1;i<m;i++){
        mat[i][0]+=mat[i-1][0];
    }       
    for(int j=1;j<n;j++){
        mat[0][j]+=mat[0][j-1];
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            mat[i][j] += mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
        }
    }
    vector<vector<int>> ans(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x = min(m-1,i+K);
            int y = min(n-1,j+K);

            ans[i][j] = mat[x][y];
            if(i-K-1>=0){
                ans[i][j] -= mat[i-K-1][y];
            }
            if(j-K-1>=0){
                ans[i][j] -= mat[x][j-K-1];
            }
            if(i-K-1>=0&&j-K-1>=0){
                ans[i][j] += mat[i-K-1][j-K-1];
            }
        }
    }
    return ans;
}