package t474;

public class OnesandZeroes {

    public int findMaxForm(String[] strs, int m, int n) {
        int[][] dp = new int[m+1][n+1];
        for(String  str:strs){
            int zeros = 0;
            int ones = 0;
            for(int i=0;i<str.length();i++){
                if(str.charAt(i)=='1'){
                    ones++;
                }else{
                    zeros++;
                }
            }
                for(int k=m;k>=zeros;k--){
                    for(int t=n;t>=ones;t--){
                        dp[k][t] = Math.max(dp[k][t],dp[k-zeros][t-ones]+1);
                    }
                }
            }

        return dp[m][n];
    }
}
