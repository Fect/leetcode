package t1218;

import java.util.HashMap;
import java.util.Map;

public class LongestArithmeticSubsequenceofGivenDifference {

    public int longestSubsequence(int[] arr, int difference) {

        int n = arr.length;
        int res = 0;

        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++){
            if(map.containsKey(arr[i]-difference)){
                map.put(arr[i],Math.max(map.containsKey(arr[i])?map.get(arr[i]):0,map.get(arr[i]-difference)+1));
            }else{
                map.put(arr[i],1);
            }
            res = Math.max(map.get(arr[i]),res);
        }


        return res;
    }
}
