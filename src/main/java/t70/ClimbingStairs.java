package t70;

import java.util.*;

public class ClimbingStairs {

    public int climbStairs(int n) {

        List<Integer> a = new ArrayList<Integer>();
        a.add(1);
        List<Integer> c = new ArrayList<Integer>(a);
        List<Integer> b =a.subList(0,1);

        System.out.println(a==b);

        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        Map<Integer,Integer> map1 = new LinkedHashMap<Integer,Integer>();
        Map<Integer,Integer> map2 = new Hashtable<>();

        int[] dp = new int[n+1];
        dp[1] = 1;
        dp[2] = 2;

        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
}
