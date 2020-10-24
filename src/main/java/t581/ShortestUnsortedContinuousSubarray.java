package t581;

public class ShortestUnsortedContinuousSubarray {

    public static int findUnsortedSubarray(int[] nums) {
        int beg = -1;
        int end = -2;

        int max = nums[0];
        int min = nums[nums.length-1];

        int n = nums.length;

        for(int i=0;i<nums.length;i++){
            max = Math.max(max,nums[i]);
            min = Math.min(min,nums[n-1-i]);

            if(nums[i]<max){
                end = i;
            }
            if(nums[n-i-1]>min){
                beg = n-1-i;
            }
        }
        return end-beg+1;
    }
    public static void main(String args[]){
        int[] nums = {2,6,4,8,10,9,15};
        int a = findUnsortedSubarray(nums);
    }
}
