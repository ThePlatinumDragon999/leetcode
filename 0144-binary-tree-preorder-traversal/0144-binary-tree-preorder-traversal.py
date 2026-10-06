# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode | None) -> list[int]:
        self.nodes = []
        self.preorderTraversalRecursive(root)

        return self.nodes

    def preorderTraversalRecursive(self, node: TreeNode | None):
        if not node:
            return
        
        self.nodes.append(node.val)
        self.preorderTraversalRecursive(node.left)
        self.preorderTraversalRecursive(node.right)
        