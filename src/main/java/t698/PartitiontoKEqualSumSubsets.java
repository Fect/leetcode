package t698;

public class PartitiontoKEqualSumSubsets {

    public boolean help(int[] nums,boolean[] vis,int target,int cur,int start,int k){
        if(k==1){
            return true;
        }
        if(cur==target){
            return help(nums,vis,target,0,0,k-1);
        }
        for(int i=start;i<nums.length;i++){
            if(vis[i]){
                continue;
            }
            vis[i] = true;
            if(help(nums,vis,target,cur+nums[i],i+1,k)){
                return true;
            }
            vis[i] = false;
        }
        return false;
    }

    public boolean canPartitionKSubsets(int[] nums, int k) {

        int sum = 0;
        int n = nums.length;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }

        int target = sum;
        if(sum%k!=0){
            return false;
        }else{
            target = sum/k;
        }
        boolean[] vis = new boolean[n];
        for(int i=0;i<n;i++){
            vis[i] = false;
        }

        return help(nums,vis,target,0,0,k);
    }
}
