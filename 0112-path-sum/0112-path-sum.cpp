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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) {
            return false;
        }

        return hasPathSumRecursive(root, targetSum, 0);
    }
private:
    bool hasPathSumRecursive(TreeNode* node, int targetSum, int currentSum) {
        if (!node) {
            return currentSum == targetSum;
        }

        if (!node->left) {
            return hasPathSumRecursive(node->right, targetSum, currentSum + node->val);
        }

        if (!node->right) {
            return hasPathSumRecursive(node->left, targetSum, currentSum += node->val);
        }

        return hasPathSumRecursive(node->left, targetSum, currentSum + node->val) ||
        hasPathSumRecursive(node->right, targetSum, currentSum + node->val);
    }
};