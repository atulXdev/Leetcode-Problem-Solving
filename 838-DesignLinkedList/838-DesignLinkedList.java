// Last updated: 25/03/2026, 15:17:09
class ListNode{
    int val;
    ListNode next;
    ListNode(int x){
        val=x;
    }
};

class MyLinkedList {
    ListNode head;
    int size;

    public MyLinkedList() {
        //psedo haed

        head=new ListNode(0);
        size=0;
        
    }
    
    public int get(int index) {
        if(index<0){
            return -1;
        }

        if(index>=size){
            return -1;
        }

        ListNode curr=head;
        for(int i=0;i<=index;i++){
            curr=curr.next;
        }
        return curr.val;
        
    }
    
    public void addAtHead(int val) {
        addAtIndex(0,val);
      
        
    }
    
    public void addAtTail(int val) {
        addAtIndex(size,val);
        
        
    }
    
    public void addAtIndex(int index, int val) {

        if(index<0){
            return;
        }

        if(index>size){
            return;
        }

        ListNode curr=head;
        size++;

        for(int i=0;i<index;i++){
            curr=curr.next;
        }

        ListNode newnode= new ListNode(val);
        newnode.next=curr.next;
        curr.next=newnode;

        
    }
    
    public void deleteAtIndex(int index) {
         if(index<0){
            return;
        }

        if(index>=size){
            return;
        }
        ListNode curr=head;
        for(int i=0;i<index;i++){
            curr=curr.next;
        }
        curr.next=curr.next.next;
        size--;
    }
}

