// Last updated: 07/06/2026, 12:35:52
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* oddEvenList(ListNode* head) {
14          if(head == NULL || head->next == NULL)
15            return head;
16        ListNode* even=head->next;
17        ListNode* odd=head;
18        ListNode* evenHead=head->next;
19
20        //Even node will always at last after completing the loop and odd node will
21        //be just before it
22        //after one itertion even will always just ine ahead of odd
23
24        //we have only check for even node
25        while(even!=NULL && even->next!=NULL){
26            odd->next=odd->next->next;
27            even->next=even->next->next;
28
29            odd=odd->next;
30            even=even->next;
31        }
32        odd->next=evenHead;
33        return head;
34        
35    }
36};