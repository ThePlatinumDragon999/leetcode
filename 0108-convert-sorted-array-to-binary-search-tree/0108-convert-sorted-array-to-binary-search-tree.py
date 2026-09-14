# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        return self.addNode(nums, 0, len(nums) - 1)
    
    def addNode(self, nums: List[int], start, end) -> Optional[TreeNode]:
        if start > end:
            return None

        mid = start + (end - start) // 2
        currentNode = TreeNode(nums[mid])
        currentNode.left = self.addNode(nums, start, mid - 1)
        currentNode.right = self.addNode(nums, mid + 1, end)

        return currentNode
        