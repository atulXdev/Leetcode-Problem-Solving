// Last updated: 01/06/2026, 00:18:12
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* node) {
12        ListNode* temp=node->next;
13        node->val=temp->val;
14        node->next=temp->next;
15        delete temp;
16        
17    }
18};