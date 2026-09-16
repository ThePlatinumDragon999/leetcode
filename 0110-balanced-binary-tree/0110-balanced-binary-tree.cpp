/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }

        int leftHeight = subtreeHeight(root->left);
        int rightHeight = subtreeHeight(root->right);
        bool compare = abs(leftHeight - rightHeight) <= 1;

        return isBalanced(root->left) && isBalanced(root->right) && compare;
    }
private:
    int subtreeHeight(TreeNode* node) {
        if (!node) {
            return 0;
        }

        return 1 + max(subtreeHeight(node->left), subtreeHeight(node->right));
    }
};