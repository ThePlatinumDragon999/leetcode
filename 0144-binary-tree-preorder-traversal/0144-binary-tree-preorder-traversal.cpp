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

vector<int> returnVec;

public:
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalRecursive(root);
        return returnVec;
    }
private:
    void preorderTraversalRecursive(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        returnVec.push_back(node->val);
        preorderTraversalRecursive(node->left);
        preorderTraversalRecursive(node->right);
    }
};