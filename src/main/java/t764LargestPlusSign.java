import java.util.HashSet;
import java.util.Set;

public class t764LargestPlusSign {
    public int orderOfLargestPlusSign(int N, int[][] mines) {
        int[][] dp = new int[505][505];
        Set<Integer> s = new HashSet<Integer>();

        for(int i=0;i<mines.length;i++){
            s.add(mines[i][0]*N+mines[i][1]);
        }

        int res = 0;
        for(int i=0;i<N;i++){
            int cut = 0;
            for(int j=0;j<N;j++){
                if(!s.contains(i*N+j)){
                    cut++;
                    dp[i][j] = cut;
                }else{
                    cut=0;
                }
            }

            cut = 0;
            for(int j=N-1;j>=0;j--){
                if(!s.contains(i*N+j)){
                    cut++;
                    dp[i][j] = Math.min(dp[i][j],cut);
                }else{
                    cut=0;
                }
            }
        }
        for(int j=0;j<N;j++){
            int cut = 0;
            for(int i=0;i<N;i++){
                if(!s.contains(i*N+j)){
                    cut++;
                    dp[i][j] = Math.min(dp[i][j],cut);
                }else{
                    cut=0;
                }
            }

            cut = 0;
            for(int i=N-1;i>=0;i--){
                if(!s.contains(i*N+j)){
                    cut++;
                    dp[i][j] = Math.min(dp[i][j],cut);
                    res = Math.max(dp[i][j],res);
                }else{
                    cut=0;
                }
            }
        }
        return res;
    }
}
