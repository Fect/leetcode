#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& grid,vector<vector<bool>>& visit,int i,int j,int& res){
    
    visit[i][j] = true;

    int flag = false;
    if(i-1>=0&&grid[i-1][j]==0&&!visit[i-1][j]){
        dfs(grid,visit,i-1,j,res);
    }
    if(i+1<grid.size()&&grid[i+1][j]==0&&!visit[i+1][j]){
        dfs(grid,visit,i+1,j,res);
    }
    if(j-1>=0&&grid[i][j-1]==0&&!visit[i][j-1]){
        dfs(grid,visit,i,j-1,res);
    }
    if(j+1<grid[0].size()&&grid[i][j+1]==0&&!visit[i][j+1]){
        dfs(grid,visit,i,j+1,res);
    }
}

int closedIsland(vector<vector<int>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visit(n,vector<bool>(m,false));

    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visit[i][j]){
                continue;
            }else{
                if(grid[i][j]==0){
                    dfs(grid,visit,i,j,res++);
                }
            }
        }
    }

}