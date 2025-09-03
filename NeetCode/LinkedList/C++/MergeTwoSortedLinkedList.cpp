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

#include <queue>

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        queue<ListNode*> q;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val > list2->val) {
                q.push(list2);
                list2 = list2->next;
                continue;
            } 

            q.push(list1);
            list1 = list1->next;
        }

        while (list1 != nullptr) {
            q.push(list1);
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            q.push(list2);
            list2 = list2->next;
        }

        ListNode* head = q.front();
        ListNode* current = head;
        q.pop();

        while (!q.empty()) {
            current->next = q.front();
            current = current->next;
            q.pop();
        }

        return head;
    }
};
