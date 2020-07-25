#include <bits/stdc++.h>
using namespace std;

int help(int x1,int y1,int x2,int y2,vector<vector<int>>& preSum){
    return preSum[x2][y2] - preSum[x1-1][y2]-preSum[x2][y1-1]+preSum[x1-1][y1-1];
}

int numSubmat(vector<vector<int>>& mat) {

    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> preSum(m+1,vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            preSum[i+1][j+1] = preSum[i][j+1] + preSum[i+1][j] - preSum[i][j]+mat[i][j];
        }
    }

    int res = 0;
    for(int row=1;row<=m;row++){
        for(int len=1;len+row-1<=m;len++){
            for(int col=1;col<=n;col++){
                if(help(row,col,row+len-1,col,preSum)==len){
                    int tmp = col;
                    while(tmp<=n&&help(row,tmp,row+len-1,tmp,preSum)==len){
                        tmp++;
                    }
                    int length = tmp - col;
                    res += (length+1)*length/2;
                    col = tmp - 1;
                }
            }
        }
    }
    
    return res;
}