package t1048;

import java.lang.Math;
import java.util.Arrays;

public class LongestStringChain {

    boolean valild(int[] a,int[] b){
        int diff = 0;
        for(int i=0;i<26;i++){
            diff += Math.abs(a[i] - b[i]);
        }
        return diff==1;
    }

    public int longestStrChain(String[] words) {
        int n = words.length;
        Arrays.sort(words,(a,b)->Integer.compare(a.length(),b.length()));
        int[][] cache = new int[n][26];

        int[] dp = new int[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                cache[i][words[i].charAt(j)-'a']+=1;
            }
        }
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(valild(cache[i],cache[j])){
                    dp[i] = Math.max(dp[i],dp[j]+1);
                }
            }
            res = Math.max(res,dp[i]);
        }
        return res;
    }
}
