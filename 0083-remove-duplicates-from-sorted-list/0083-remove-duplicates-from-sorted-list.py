# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head
        
        curPointer = head.next
        prevPointer = head

        while curPointer:
            if curPointer.val == prevPointer.val:
                prevPointer.next = curPointer.next
                curPointer = prevPointer.next
            else:
                prevPointer = curPointer
                curPointer = curPointer.next
        
        return head
        