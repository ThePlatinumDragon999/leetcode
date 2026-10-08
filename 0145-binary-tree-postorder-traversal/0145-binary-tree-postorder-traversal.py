# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode | None) -> list[int]:
        self.nodes = []

        self.addNode(root)

        return self.nodes
    
    def addNode(self, node):
        if not node:
            return
        
        self.addNode(node.left)
        self.addNode(node.right)
        self.nodes.append(node.val)
        