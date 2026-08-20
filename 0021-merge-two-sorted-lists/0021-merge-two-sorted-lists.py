# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        iter = dummy

        p1 = list1
        p2 = list2

        while p1 and p2:
            if p1.val > p2.val:
                iter.next = p2
                p2 = p2.next
            else:
                iter.next = p1
                p1 = p1.next
            
            iter = iter.next
        
        if p1:
            iter.next = p1
        if p2:
            iter.next = p2
        
        return dummy.next