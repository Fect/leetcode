package t560;

import java.util.HashMap;
import java.util.Map;

public class SubarraySumEqualsK {

    public static int subarraySum(int[] nums, int k) {

        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        map.put(0,1);
        int su = 0;
        int res = 0;
        for(int i=0;i<nums.length;i++){
            su+=nums[i];
            res+=map.getOrDefault(su-k,0);
            map.put(su,map.getOrDefault(su,0)+1);
        }

        return res;
    }

    public static void main(String args[]){
        int dd[] = {1,2,3};
        int res = subarraySum(dd,3);
    }

}
