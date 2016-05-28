//Given a binary tree, return the preorder traversal of its nodes' values.


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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> order;
        if(root == NULL) return order;
        stack<TreeNode *> tmp;
        tmp.push(root);
        TreeNode *tmp_node;
        while(!tmp.empty()) {
            tmp_node = tmp.top();
            order.push_back(tmp_node->val);
            tmp.pop();
            if(tmp_node->right != NULL) {
                tmp.push(tmp_node->right);
            }
            if(tmp_node->left != NULL) {
                tmp.push(tmp_node->left);
            }
        }
        
        return order;
    }
};
