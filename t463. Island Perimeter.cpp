#include <bits/stdc++.h>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {

    int cut = 0;
    int repat = 0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            if(!grid[i][j]){
                continue;
            }else{
                cut++;
            }
            if(i>0&&grid[i-1][j])
                repat++;
            if(j>0&&grid[i][j-1])
                repat++;
        }
    }
    return cut*4-2*repat;
}