// Last updated: 26/05/2026, 23:12:50
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
12 //ROOT LEFT RIGHT
13class Solution {
14public:
15 void preorder(TreeNode* root,vector<int> & ans){
16    if(root==NULL){
17        return;
18    }
19    ans.push_back(root->val);
20    preorder(root->left,ans);
21    preorder(root->right,ans);
22 }
23    vector<int> preorderTraversal(TreeNode* root) {
24        vector<int> ans;
25        preorder(root,ans);
26
27        return ans;
28        
29    }
30};