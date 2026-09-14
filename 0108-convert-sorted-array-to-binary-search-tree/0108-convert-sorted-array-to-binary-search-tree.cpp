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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int numsSize = nums.size();
        TreeNode* root = nullptr;
        addNode(nums, 0, numsSize - 1, root);

        return root;
    }
private:
    void addNode(vector<int>& nums, int start, int end, TreeNode*& currentNode) {
        if (start > end) {
            return;
        }

        int mid = start + (end - start) / 2;
        currentNode = new TreeNode(nums[mid]);

        addNode(nums, start, mid - 1, currentNode->left);
        addNode(nums, mid + 1, end, currentNode->right);
    }
};