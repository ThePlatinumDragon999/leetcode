# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        self.nodes = []

        self.appendNode(root)

        return self.nodes

    def appendNode(self, rootNode):
        if not rootNode:
            return
        
        self.appendNode(rootNode.left)
        self.nodes.append(rootNode.val)
        self.appendNode(rootNode.right)


        