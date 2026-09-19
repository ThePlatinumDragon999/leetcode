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
        return hasPathSumRecursive(root, targetSum, 0);
    }
private:
    bool hasPathSumRecursive(TreeNode* node, int targetSum, int currentSum) {
        if (!node) {
            return false;
        }

        currentSum += node->val;

        if (!node->left && !node->right) {
            return currentSum == targetSum;
        }

        // If both children exist, go down both paths
        return hasPathSumRecursive(node->left, targetSum, currentSum) ||
        hasPathSumRecursive(node->right, targetSum, currentSum);
    }
};