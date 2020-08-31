package t120;

import java.util.ArrayList;
import java.util.List;

public class Triangle {

    public static int minimumTotal(List<List<Integer>> triangle) {

        int n = triangle.size();
        int[][] dp = new int[n][n];

        for(int i=0;i<triangle.get(0).size();i++){
            dp[0][i] = triangle.get(0).get(i);
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<triangle.get(i).size();j++){
                if(j<triangle.get(i-1).size()){
                    dp[i][j] = Math.min(dp[i-1][j]+triangle.get(i).get(j),dp[i-1][j-1>=0?j-1:0]+triangle.get(i).get(j));
                }else{
                    dp[i][j] = dp[i-1][j-1>=0?j-1:0]+triangle.get(i).get(j);
                }
            }
        }
        int res = dp[n-1][0];
        for(int i=1;i<triangle.get(n-1).size();i++){
            res = Math.min(res,dp[n-1][i]);
        }

        return res;
    }

    public static void main(String[] args){
        List<List<Integer>> dp = new ArrayList<List<Integer>>();

        List<Integer> L1 = new ArrayList<Integer>();
        List<Integer> L2 = new ArrayList<Integer>();
        List<Integer> L3 = new ArrayList<Integer>();
        List<Integer> L4 = new ArrayList<Integer>();

        L1.add(2);
        dp.add(L1);
        L2.add(3); L2.add(4);
        dp.add(L2);
        L3.add(6);L3.add(5);L3.add(7);
        dp.add(L3);
        L4.add(4); L4.add(1); L4.add(8); L4.add(3);
        dp.add(L4);

        int res = minimumTotal(dp);
    }
}
