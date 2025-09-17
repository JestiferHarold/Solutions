/**
 * Remove LinkedList Elements
 * 
 * @details Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
 */

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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) head = head->next;

        if (head == nullptr) return head;

        ListNode* node = head;

        while (node->next != nullptr) {
            if (node->next->val == val) {
                node->next = node->next->next;
            } else {
                node = node->next;
            }
        }

        return head;
    }
}; 