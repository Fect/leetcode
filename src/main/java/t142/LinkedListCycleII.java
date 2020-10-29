package t142;

public class LinkedListCycleII {

     class ListNode {
      int val;
      ListNode next;
      ListNode(int x) {
          val = x;
          next = null;
      }
    }

    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null&&fast.next!=null){
            fast = fast.next.next;
            slow = slow.next;
        }
        if(fast!=null&&fast.next!=null){
            while(head!=slow){
                head = head.next;
                slow = slow.next;
            }
            return slow;
        }

        return null;
    }
}
