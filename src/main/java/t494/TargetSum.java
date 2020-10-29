package t494;

import java.util.HashMap;
import java.util.Map;

public class TargetSum {

    public static int findTargetSumWays(int[] nums, int S) {
        int sum = 0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        int target = sum+S;
        if(sum<S||target%2!=0){
            return 0;
        }
        target = target/2;
        int[] dp = new int[target+1];

        dp[0] = 1;
        for(int i=0;i<nums.length;i++){
            for(int j=target;j>=nums[i];j--){
                dp[j]+=dp[j-nums[i]];
            }
        }

        return dp[target];
    }

    public static void main(String[] args){
        int[] nums = new int[]{1,1,1,1,1};
        int res = findTargetSumWays(nums,3);
        System.out.println(res);
    }

}
