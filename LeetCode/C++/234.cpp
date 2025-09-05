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
    bool isPalindrome(ListNode* head) {

        if (head->next == nullptr) return true;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        fast = slow->next;

        while (fast != nullptr) {
            slow->next = prev;
            prev = slow;
            slow = fast;
            fast = fast->next;
        }

        slow->next = prev;
        fast = head;

        while (slow != nullptr && fast != nullptr) {
            if (fast->val != slow->val) {
                return false;
            }

            fast = fast->next;
            slow = slow->next;
        }

        return true;
    }
};