// Last updated: 26/05/2026, 22:30:26
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
14    vector<int> preorderTraversal(TreeNode* root) {
15         vector<int> preorder;
16        if(root==NULL) return preorder;
17        stack<TreeNode*> st;
18        st.push(root);
19
20        while(!st.empty()){
21            root=st.top();
22            st.pop();
23
24            preorder.push_back(root->val);
25
26            if(root->right!=NULL) st.push(root->right);
27             if(root->left!=NULL) st.push(root->left);
28
29
30        }
31
32        return preorder;
33        
34    }
35};