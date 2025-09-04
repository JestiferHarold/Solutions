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
// class Solution {
// public:

//     ListNode* MiddleElement(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         ListNode* mid = slow->next;
//         slow->next = nullptr;

//         return mid;
//     }

//     ListNode* ReverseList(ListNode* head) {
        
//         ListNode* prev = nullptr;
//         ListNode* current = head;
//         ListNode* next = head->next;

//         while (next != nullptr) {
//             current->next = prev;
//             prev = current;
//             current = next;
//             next = next->next;
//         }

//         current->next = prev;

//         return current;
//     }

//     void reorderList(ListNode* head) {
//         if (head == nullptr) return;
//         if (head->next == nullptr) return;

//         ListNode* mid = this->MiddleElement(head);
//         ListNode* head2 = this->ReverseList(mid);

//         ListNode* current = head;
//         ListNode* m = head->next;
//         bool first = true;
//         while (m->next == mid) {
//             if (first) {
//                 current->next = mid;
//                 mid = mid->next;
//                 current = current->next;
//             } else {
//                 current->next = m;
//                 m = m->next;
//                 current = current->next;
//             }
//             first = !first;
//         }
//     } 
// };