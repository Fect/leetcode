#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& visit){
    visit[i][j] = true;
    
    int sum = 1;

    if(i>0&&!visit[i-1][j]&&grid[i-1][j]==1)
        sum += dfs(grid,i-1,j,visit);
    if(i<grid.size()-1&&!visit[i+1][j]&&grid[i+1][j]==1)
        sum += dfs(grid,i+1,j,visit);
    if(j>0&&!visit[i][j-1]&&grid[i][j-1]==1)
        sum += dfs(grid,i,j-1,visit);
    if(j<grid[0].size()-1&&!visit[i][j+1]&&grid[i][j+1]==1)
        sum += dfs(grid,i,j+1,visit);

    return sum;

}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> dp(n,vector<bool>(m,false));

    int res = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dp[i][j]){
                continue;
            }else{
                //dp[i][j] = true;
                //int cun = 0;
                if(grid[i][j]==1){
                    res = max(res,dfs(grid,i,j,dp));
                }
            }
        }
    }
    return res;
}