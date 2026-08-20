/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* iter = &dummy;

        ListNode* p1 = list1;
        ListNode* p2 = list2;

        while (p1 && p2) 
        {
            if (p1->val < p2->val) 
            {
                iter->next = p1;
                p1 = p1->next;
            }
            else
            {
                iter->next = p2;
                p2 = p2->next;
            }

            iter = iter->next;
        }
        
        // Dealing with leftover nodes
        if (p1) {
            iter->next = p1;
        }
        if (p2) {
            iter->next = p2;
        }
        
        return dummy.next;
    }
};