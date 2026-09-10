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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isNodeTheSame(p, q);
    }
private:
    bool isNodeTheSame(TreeNode* pNode, TreeNode* qNode) {
        if (!pNode && !qNode) {
            return true;
        }

        if (!pNode || !qNode) {
            return false;
        }

        if (pNode->val == qNode->val) {
            return isNodeTheSame(pNode->left, qNode->left) && isNodeTheSame(pNode->right, qNode->right);
        }

        return false;
    }
};