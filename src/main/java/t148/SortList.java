package t148;

public class SortList {

     public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }

    public ListNode merge(ListNode le,ListNode re){
        ListNode root = new ListNode(-1);
        ListNode cu = root;
        while(le!=null&&re!=null){
            if(le.val<re.val){
                root.next = le;
                root = root.next;
                le = le.next;
            }else{
                root.next = re;
                root = root.next;
                re = re.next;
            }
        }
        if(le!=null){
            root.next = le;
        }
        if(re!=null){
            root.next = re;
        }
        return cu.next;
    }

    public ListNode sortList(ListNode head) {
        if(head==null||head.next==null){
            return head;
        }
        ListNode pred,slow,fast;
        pred = slow = fast = head;

        while(fast!=null&&fast.next!=null){
            pred = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        pred.next = null;

        return merge(sortList(head),sortList(slow));
    }
}
