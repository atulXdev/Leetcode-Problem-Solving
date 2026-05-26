// Last updated: 26/05/2026, 23:03:26
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
14
15void preorder(TreeNode* root,vector<int> & ans){
16
17if(root==NULL){
18    return;
19}
20ans.push_back(root->val);
21preorder(root->left,ans);
22preorder(root->right,ans);
23}
24
25
26    vector<int> preorderTraversal(TreeNode* root) {
27
28        vector<int> ans;
29        preorder(root,ans);
30        return ans;
31        
32    }
33};