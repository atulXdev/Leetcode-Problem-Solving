// Last updated: 30/05/2026, 16:49:38
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<int> postorderTraversal(TreeNode* root) {
15
16        stack<TreeNode*> st1,st2;
17        vector<int> postorder;
18        if(root==NULL) return postorder;
19        st1.push(root);
20
21        while(!st1.empty()){
22            root=st1.top();
23            st1.pop();
24            st2.push(root); //esme order ulta ayega right left root so again ek
25            //loop chla ke ulta print kr denge and we will get left right root
26
27            if(root->left!=NULL){
28                st1.push(root->left);
29            }
30
31              if(root->right!=NULL){
32                st1.push(root->right);
33            }
34
35        }
36
37        while(!st2.empty()){
38            root=st2.top();
39            st2.pop();
40            postorder.push_back(root->val);
41
42        }
43        return postorder;
44    }
45};