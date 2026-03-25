// Last updated: 25/03/2026, 15:16:53
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int pairSum(ListNode head) {
        List<Integer> list= new ArrayList<>();
        //itrarting through the LL and adding values in list as LL tranverse only in one dir
        while(head!=null){
            list.add(head.val);
            head=head.next;
        }

        int i=0;
        int j=list.size()-1;

        int max=Integer.MIN_VALUE;
        while(i<j){
            int sum=list.get(i) + list.get(j);
            max=Math.max(sum,max);
            i=i+1;
            j=j-1;
        }
        return max;
    }
}