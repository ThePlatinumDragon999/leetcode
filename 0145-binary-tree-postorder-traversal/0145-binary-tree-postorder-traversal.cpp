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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nodes;

        addNode(root, nodes);

        return nodes;
        
    }
private:
    void addNode(TreeNode* node, vector<int>& nodes) {
        if (node == nullptr) {
            return;
        }

        addNode(node->left, nodes);
        addNode(node->right, nodes);
        nodes.push_back(node->val);
    }
};