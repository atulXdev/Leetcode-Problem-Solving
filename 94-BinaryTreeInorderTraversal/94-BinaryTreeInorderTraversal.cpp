// Last updated: 26/05/2026, 23:29:58
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
12
13 //LEFT ROOT RIGHT
14
15class Solution {
16public:
17
18void inorder(TreeNode* root,vector<int> & ans){
19    if(root==NULL){
20        return;
21    }
22    inorder(root->left,ans);
23    ans.push_back(root->val);
24    inorder(root->right,ans);
25}
26    vector<int> inorderTraversal(TreeNode* root) {
27        vector<int> ans;
28        inorder(root,ans);
29
30        return ans;
31        
32    }
33};