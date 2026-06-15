// Last updated: 15/06/2026, 21:45:01
1class Solution {
2public:
3    int height(TreeNode* root) {
4        if (root == NULL) return 0;
5
6        return 1 + max(height(root->left), height(root->right));
7    }
8
9    int diameterOfBinaryTree(TreeNode* root) {
10        if (root == NULL) return 0;
11
12        int leftHeight = height(root->left);
13        int rightHeight = height(root->right);
14
15        int currDiameter = leftHeight + rightHeight;
16
17        int leftDiameter = diameterOfBinaryTree(root->left);
18        int rightDiameter = diameterOfBinaryTree(root->right);
19
20        return max(currDiameter, max(leftDiameter, rightDiameter));
21    }
22};