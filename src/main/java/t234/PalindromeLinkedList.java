package t234;

public class PalindromeLinkedList {

     public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    ListNode fanzhuan(ListNode root){
        ListNode p = new ListNode(0);
        while(root!=null){
            ListNode tmp = root.next;
            root.next = p.next;
            p.next = root;
            root = tmp;
        }
        return p.next;
    }

    public boolean isPalindrome(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        if(head==null){
            return false;
        }
        while(fast.next!=null&&fast.next.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode l = fanzhuan(slow.next);
        while(head!=null&&l!=null){
            if(head.val!=l.val){
                return false;
            }
        }
        return true;
    }
}
