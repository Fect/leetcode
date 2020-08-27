package t494;

import java.util.HashMap;
import java.util.Map;

public class TargetSum {

    public static int findTargetSumWays(int[] nums, int S) {
        int res = 0;

        Map<Integer,Integer> ma = new HashMap<Integer,Integer>();

        ma.put(0,1);
        for(int i=0;i<nums.length;i++){
            Map<Integer,Integer> ma1 = new HashMap<Integer,Integer>();
            for(Integer idx:ma.keySet()) {
                int cut = ma.get(idx);
                if(ma1.containsKey(idx + nums[i])){
                    ma1.put(idx + nums[i], ma1.get(idx + nums[i]) + cut);
                }else{
                    ma1.put(idx + nums[i], cut);
                }

                if(ma1.containsKey(idx - nums[i])){
                    ma1.put(idx - nums[i], ma1.get(idx - nums[i]) + cut);
                }else{
                    ma1.put(idx - nums[i], cut);
                }
            }
            ma = ma1;
        }
        if(ma.containsKey(S)){
            return ma.get(S);
        }else{
            return 0;
        }
    }

    public static void main(String[] args){
        int[] nums = new int[]{1,1,1,1,1};
        int res = findTargetSumWays(nums,3);
        System.out.println(res);
    }

}
