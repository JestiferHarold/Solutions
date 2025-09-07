#include <iostream>

using namespace std;

class Node {

    public:
        Node* next;
        int value;
        Node(int val) {
            this->value = val;
            this->next = nullptr;
        }
};

Node* reverse(Node* head) {

    if (head == nullptr || head->next == nullptr) return head;

    Node* revhead = reverse(head->next);

    head->next->next = head;

    head->next = nullptr;

    return revhead;
}

void printReverse(Node* head) {
    if (head == nullptr) return;

    printReverse(head->next);

    cout << head->value << "\n";
}

int main() {
    Node s = Node(1);
    Node r = Node(2);
    Node q = Node(3);
    Node k = Node(4);
    Node j = Node(5);
    s.next = &r;
    r.next = &q;
    q.next = &k;
    k.next = &j;
    printReverse(&s);
    Node* a = reverse(&s);
    printReverse(a);   
}