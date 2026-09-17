# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode | None) -> bool:
        height = self.depth(root)
        if height == -1:
            return False
        
        return True
 
    def depth(self, node) -> int:
        if not node:
            return 0
        
        leftDepth = self.depth(node.left)
        if (leftDepth == -1):
            return -1
        rightDepth = self.depth(node.right)
        if (rightDepth == -1):
            return -1

        if (abs(rightDepth - leftDepth) > 1):
            return -1
        
        return 1 + max(leftDepth, rightDepth)
        