// Last updated: 26/05/2026, 23:21:40
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
13 // LEFT RIGHT ROOT
14class Solution {
15public:
16 void postorder(TreeNode* root,vector<int> & ans){
17    if(root==NULL) return;
18
19    postorder(root->left,ans);
20    postorder(root->right,ans);
21    ans.push_back(root->val);
22 }
23    vector<int> postorderTraversal(TreeNode* root) {
24        vector<int> ans;
25
26        postorder(root,ans);
27
28        return ans;
29        
30    }
31};