//Given two binary trees, write a function to check if they are equal or not.

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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p == NULL && q == NULL) {
            return true;
        } else if(p == NULL || q== NULL) {
            return false;
        } else {
            if(p->val != q->val) {
                return false;
            } else {
                bool isLeftSameTree = isSameTree(p->left, q->left);
                bool isRightSameTree = isSameTree(p->right, q->right);
                
                return (isLeftSameTree&&isRightSameTree);
            }
        }
    }
};
