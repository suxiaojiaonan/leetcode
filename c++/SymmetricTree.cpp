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
    bool isSymmetric(TreeNode *root) {
        if (root == NULL) {
            return true;
        }
        return helper(root->left, root->right);
    }

private:
    bool helper(TreeNode *a, TreeNode *b) {
        if (a == NULL && b == NULL) return true;
        if (a == NULL || b == NULL) return false;  // only one has node in a tree and b tree
        if (a->val != b->val) return false;
        return helper(a->left, b->right) && helper(a->right, b->left); // a goes in in-order traversal, b goes right first then left.
    }
};
