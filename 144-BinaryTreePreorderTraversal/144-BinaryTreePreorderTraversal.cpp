// Last updated: 26/05/2026, 15:25:56
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
13    //ROOT LEFT RIGHT
14public:
15 void preorder(TreeNode* root,vector<int> & ans){
16
17    if(root==NULL){
18        return;
19    }
20    ans.push_back(root->val);
21    preorder(root->left,ans);
22    preorder(root->right,ans);
23
24 }
25    vector<int> preorderTraversal(TreeNode* root) {
26        vector<int> ans;
27        preorder(root,ans);
28
29        return ans;
30        
31    }
32};