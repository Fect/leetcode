package t64;

public class MinimumPathSum {

    public int minPathSum(int[][] grid) {

        int n = grid.length;
        int m = grid[0].length;

        int[][] dp = new int[n][m];

        int su = 0;
        for(int i=0;i<n;i++){
            su+=grid[i][0];
            dp[i][0] = su;
        }

        su = 0;
        for(int i=0;i<m;i++){
            su+=grid[0][i];
            dp[0][i] = su;
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j] = Math.min(dp[i][j-1],dp[i-1][j])+grid[i][j];
            }
        }
        return dp[n-1][m-1];
    }
}
