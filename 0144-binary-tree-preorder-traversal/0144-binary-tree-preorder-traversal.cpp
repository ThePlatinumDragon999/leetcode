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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> returnVec;
        preorderTraversalRecursive(root, returnVec);
        return returnVec;
    }
private:
    void preorderTraversalRecursive(TreeNode* node, vector<int>& returnVec) {
        if (node == nullptr) {
            return;
        }

        returnVec.push_back(node->val);
        preorderTraversalRecursive(node->left, returnVec);
        preorderTraversalRecursive(node->right, returnVec);
    }
};