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
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> nodes;
        append(root, nodes);

        return nodes;   
    }

private:
    void append(TreeNode* rootNode, vector<int>& nodes) {
        if (!rootNode)
            return;
        
        append(rootNode->left, nodes);
        nodes.push_back(rootNode->val);
        append(rootNode->right, nodes);
    }
};
