// Last updated: 26/05/2026, 23:50:53
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15
16        vector<vector<int>> ans;
17        if(root==NULL){
18            return ans;
19        }
20
21        queue<TreeNode*> q;
22        q.push(root);
23
24        while(!q.empty()){
25            int size=q.size();
26            vector<int> level;
27
28            for(int i=0;i<size;i++){
29                TreeNode* node=q.front();
30                q.pop();
31                level.push_back(node->val);
32
33                if(node->left!=NULL) q.push(node->left);
34                if(node->right!=NULL) q.push(node->right);
35            }
36            ans.push_back(level);
37
38        }
39
40        return ans;
41        
42    }
43};