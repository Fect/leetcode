package t1223;

public class DiceRollSimulation {

    public int dieSimulator(int n, int[] rollMax) {

        long base = (long)10e8+7;
        long[][] dp = new long[n+1][7];

        for(int i=1;i<=n;i++){
            for(int j=0;j<6;j++){
                if(i==1&&rollMax[j]>0){
                    dp[i][j] = 1;
                }else if(i<=rollMax[j]){
                    dp[i][j] = dp[i-1][6];
                }else{
                    if(i-rollMax[j]==1){
                        dp[i][j] = dp[i-1][6]-1;
                    }else {
                        dp[i][j] = dp[i-1][6]-(dp[i-rollMax[j]-1][6]-dp[i-rollMax[j]-1][j])%base;
                        if(dp[i][j]<0){
                            dp[i][j]+=base;
                        }
                    }
                }
                dp[i][6]= (dp[i][6]+dp[i][j])%base;
            }
        }
        return (int)dp[n][6];
    }
}
