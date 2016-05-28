//Given a binary tree, find its maximum depth.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        int maxdepth = 0;
        int leftDepth = 0;
        int rightDepth = 0;
        leftDepth = maxDepth(root->left);
        rightDepth = maxDepth(root->right);
        if(leftDepth > rightDepth) {
            maxdepth = leftDepth + 1;
        } else {
            maxdepth = rightDepth + 1;
        }
        return maxdepth;
    }
};
