//Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL) return;
        TreeLinkNode *root_tmp = root;
        if(root->left == NULL && root->right == NULL) root->next = NULL;
        while(root_tmp != NULL) {
            TreeLinkNode *tmp = root_tmp;
            while(tmp != NULL) {
                if(tmp->left != NULL) {
                    tmp->left->next = tmp->right;
                }
                if(tmp->right != NULL && tmp->next != NULL) {
                    tmp->right->next = tmp->next->left;
                }
                tmp = tmp->next;
            }
            root_tmp = root_tmp->left;
        }
        return;
    }
};
