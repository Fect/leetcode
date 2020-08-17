#include<bits/stdc++.h>
using namespace std;

int largest1BorderedSquare(vector<vector<int>>& grid) {

    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> sumR(m+1,vector<int>(n+1,0));
    vector<vector<int>> sumC(n+1,vector<int>(m+1,0));

    for(int i=0;i<m;i++){
        int nums = 0;
        for(int j=0;j<n;j++){
            nums+=grid[i][j];
            sumR[i+1][j+1] = nums; 
        }
    }

    for(int j=0;j<n;j++){
        int nums = 0;
        for(int i=0;i<m;i++){
            nums+=grid[i][j];
            sumC[j+1][i+1] = nums; 
        }
    }

    for(int len=min(m,n);len>=0;len--){
        for(int i=0;len+i-1<m;i++){
            for(int j=0;j+len-1<n;j++){
                int x = i+len-1;
                int y = j+len-1;

                if(sumR[i+1][y+1]-sumR[i+1][j]==len
                &&sumR[x+1][y+1]-sumR[x+1][j]==len
                &&sumC[j+1][x+1]-sumC[j+1][i]==len
                &&sumC[y+1][x+1]-sumC[y+1][i]==len){
                    return len*len;
                }
            }
        }
    }
    return 0;
}