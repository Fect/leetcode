package t287;

public class FindtheDuplicateNumber {

    public int findDuplicate(int[] nums) {
        int slow = 0;
        int fast = 0;
        int t = 0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow==fast){
                break;
            }
        }
        while(true){
            slow = nums[slow];
            t = nums[t];
            if(slow==t){
                return slow;
            }
        }

    }
}
