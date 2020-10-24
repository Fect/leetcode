package t62;

public class UniquePaths {

    public int uniquePaths(int m, int n) {

        int res = 0;
        int[][] dp = new int[m][n];
        for(int i=0;i<m;i++){
            dp[0][i] = 1;
        }
        for(int j=0;j<n;j++){
            dp[j][0] = 1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j] = dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
}
