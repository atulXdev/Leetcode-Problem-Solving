// Last updated: 06/06/2026, 22:27:18
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
13    ListNode* reverseList(ListNode* head) {
14        if(head==NULL){
15            return head;
16        }
17        stack<int> st;
18        ListNode* temp=head;
19        while(temp!=NULL){
20            st.push(temp->val);
21            temp=temp->next;
22        }
23        temp=head;
24
25        while(temp!=NULL){
26            temp->val=st.top();
27            st.pop();
28            temp=temp->next;
29        }
30
31        return head;
32        
33    }
34};