package t139;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class WordBreak {

    public static boolean wordBreak(String s, List<String> wordDict) {
        Set<String> st = new HashSet<String>(wordDict);

        int n = s.length();
        int dp[] = new int[n+1];
        dp[0] = 1;
        for(int i=0;i<=n;i++){
            for(int j=0;j<i;j++){
                if(dp[j]==1&&st.contains(s.substring(j,i))){
                    dp[i] = 1;
                    break;
                }
            }
        }
        return dp[n]==1;
    }
    public static void main(String args[]){
        List<String> list = new ArrayList<String>();
        list.add("leet");
        list.add("code");
        wordBreak("leetcode",list);
    }
}
