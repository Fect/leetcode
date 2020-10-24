package t200;

public class NumberofIslands {

    void dfs(char[][] grid,boolean[][] visial,int i,int j){
        if(i<0||i>=grid.length)
            return;
        if(j<0||j>=grid[0].length)
            return;
        if(grid[i][j]=='0'||visial[i][j]){
            return;
        }
        visial[i][j] = true;
        dfs(grid,visial,i-1,j);
        dfs(grid,visial,i+1,j);
        dfs(grid,visial,i,j-1);
        dfs(grid,visial,i,j+1);
    }

    public int numIslands(char[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        boolean[][] visial = new boolean[n][m];

        int res = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='0'||visial[i][j]){
                    continue;
                }else{
                    dfs(grid,visial,i,j);
                    res++;
                }
            }
        }
        return res;
    }
}
