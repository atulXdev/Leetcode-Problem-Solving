// Last updated: 26/05/2026, 16:40:15
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
17
18        if(root==NULL){
19            return ans;
20        }
21
22        queue<TreeNode*> q;
23        q.push(root);
24
25        while(!q.empty()){
26            int size=q.size();
27            vector<int> level;
28
29            for(int i=0;i<size;i++){
30                TreeNode* node=q.front();
31                q.pop();
32
33                level.push_back(node->val);
34
35                if(node->left!=NULL) q.push(node->left);
36                if(node->right!=NULL) q.push(node->right);
37            }
38
39            ans.push_back(level);
40        }
41
42        return ans;
43        
44    }
45};