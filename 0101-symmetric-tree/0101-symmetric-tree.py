# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        return self.isSameNode(root.left, root.right)
    
    def isSameNode(self, p, q) -> bool:
        if not p and not q:
            return True
        
        if not p or not q:
            return False
        
        if (p.val == q.val):
            return self.isSameNode(p.left, q.right) and self.isSameNode(p.right, q.left)
        
        return False
        