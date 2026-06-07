// Last updated: 07/06/2026, 12:09:58
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
14        //edge case if its a null or single element
15        if(head==NULL || head->next==NULL){
16            return head;
17        }
18
19        vector<int> arr;
20        //phle add numbers ke node honge then even no ke
21        ListNode* temp=head;
22
23        //ADDING ODD INDICES DATA in arr
24        while(temp!=NULL && temp->next!=NULL){
25            arr.push_back(temp->val);
26            temp=temp->next->next;
27        }
28        if(temp){
29            arr.push_back(temp->val);
30        }
31
32        //adding even indices data in arr
33        temp=head->next;
34        while(temp!=NULL && temp->next!=NULL){
35            arr.push_back(temp->val);
36            temp=temp->next->next;
37        }
38         if(temp){
39            arr.push_back(temp->val);
40        }
41        //replacing all the data of LL by arr
42        int i=0;
43        temp=head;
44        while(temp!=NULL){
45            temp->val=arr[i++];
46            temp=temp->next;
47        }
48
49        return head;
50        
51    }
52};