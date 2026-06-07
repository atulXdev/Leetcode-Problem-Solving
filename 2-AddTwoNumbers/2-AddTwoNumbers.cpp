// Last updated: 07/06/2026, 11:34:29
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode* dummyHead=new ListNode(-1);
15        ListNode* temp1=l1;
16        ListNode* temp2=l2;
17        ListNode* curr=dummyHead;
18        int carry=0;
19
20        while(temp1!=NULL || temp2!=NULL){
21           int sum=carry;
22            if(temp1) sum+=temp1->val;
23            if(temp2) sum+=temp2->val;
24
25            ListNode* newnode= new ListNode(sum%10);
26            carry=sum/10;
27
28            curr->next=newnode;
29            curr=curr->next;
30
31            if(temp1) temp1=temp1->next;
32            if(temp2) temp2=temp2->next;
33
34            if(carry){
35                ListNode* newNode= new ListNode(carry);
36                curr->next=newNode;
37            }
38
39        }
40
41        return dummyHead->next;
42        
43    }
44};