package t377;

import java.util.HashMap;
import java.util.Map;

public class CombinationSumIV {

    public static int combinationSum4(int[] nums, int target) {
        int[] dp = new int[target+1];

        for(int i=1;i<=target;i++){
            for(int j=0;j<nums.length;j++){
                if(nums[j]>i){
                    continue;
                }else if(nums[j]==i){
                    dp[i]+=1;
                }
                else{
                    dp[i]+=dp[i-nums[j]];
                }
            }
        }
        return dp[target];
    }

    public static void main(String[] args){
        int[] nums = new int[]{3,1,2,4};
        int res = combinationSum4(nums,4);
        System.out.println(res);
    }
}
