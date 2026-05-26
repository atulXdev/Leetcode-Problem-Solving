// Last updated: 26/05/2026, 15:39:19
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
15 void inorder(TreeNode *root,vector<int> & ans){
16    if(root==NULL){
17        return;
18    }
19    
20    inorder(root->left,ans);
21    ans.push_back(root->val);
22    inorder(root->right,ans);
23 }
24    vector<int> inorderTraversal(TreeNode* root) {
25
26        vector<int> ans;
27        inorder(root,ans);
28        return ans;
29        
30    }
31};