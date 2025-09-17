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

#include <vector>

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> v;
        ListNode* current = head;

        while (current != nullptr) {
            v.push_back(current);
            current = current->next;
        } 

        int size = v.size();

        if (size == n) {
            return head->next;
        }

        v[size - n - 1]->next = v[size - n]->next;
        return head;
    }
};
