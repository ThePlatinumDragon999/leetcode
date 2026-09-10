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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        
        ListNode* curNode = head->next;
        ListNode* prevNode = head;

        while (curNode) {
            if (curNode->val == prevNode->val) {
                prevNode->next = curNode->next;
                delete curNode;
                curNode = prevNode->next;
            }
            else {
                prevNode = curNode;
                curNode = curNode->next;
            }
        }

        return head;
    }
};