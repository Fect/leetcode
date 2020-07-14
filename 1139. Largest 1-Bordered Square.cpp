#include <bits/stdc++.h>
using namespace std;

int largest1BorderedSquare(vector<vector<int>>& grid) {

    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> sum_r(m+1,vector<int>(n+1,0));
    vector<vector<int>> sum_c(n+1,vector<int>(m+1,0));

    for(int i=0;i<m;i++){
        int num = 0;
        for(int j=0;j<n;j++){
            num+=grid[i][j];
            sum_r[i+1][j+1] = num;
        }
    }

    for(int j=0;j<n;j++){
        int num = 0;
        for(int i=0;i<m;i++){
            num+=grid[i][j];
            sum_c[j+1][i+1] = num;
        }
    }

    for(int len=min(m,n);len>=1;len--){
        for(int i=0;i<m-len+1;i++){
            for(int j=0;j<n-len+1;j++){
                int x = i-1+len;
                int y = j-1+len;

                if(sum_r[i+1][y+1]-sum_r[i+1][j]==len
                &&sum_r[x+1][y+1]-sum_r[x+1][j]==len
                &&sum_c[j+1][x+1]-sum_c[j+1][i]==len
                &&sum_c[y+1][x+1]-sum_c[y+1][i]==len){
                    return len*len;
                }
            }
        }
    }

    return 0;
}