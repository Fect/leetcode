#include <bits/stdc++.h>
using namespace std;

int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
    int res = 0;
    map<vector<int>,int> ma;
    for(int i=0;i<matrix.size();i++){
        vector<int> rowflip(matrix[i].size(),0);
        for(int j=0;j<matrix[i].size();j++){
            rowflip[j] = 1-matrix[i][j];
        }
        res = max(res,++ma[matrix[i]]);
        res = max(res,++ma[rowflip]);
    }  
    return res;
}