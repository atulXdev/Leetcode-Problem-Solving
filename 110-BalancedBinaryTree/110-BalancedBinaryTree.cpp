// Last updated: 15/06/2026, 21:27:23
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
13 //∣height(left)−height(right)∣≤1
14 //agar height aa gya to Balanced BT agar height nhe  aa paya -1 aya to imbalanced
15class Solution {
16public:
17int dfsheight(TreeNode* root){
18    if(root==NULL) return 0;
19    int leftheight=dfsheight(root->left);
20    if(leftheight==-1) return -1;
21    int rightheight=dfsheight(root->right);
22    if(rightheight==-1) return -1;
23
24    if(abs(leftheight-rightheight)>1) return -1;
25
26    return 1+max(leftheight,rightheight);
27}
28    bool isBalanced(TreeNode* root) {
29        return dfsheight(root)!=-1;
30        
31    }
32};