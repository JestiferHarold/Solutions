interface ListNode {
    value: number;
    nextNode: ListNode | null;
}

function DeleteList(head: ListNode | null): void {
    if (head == null) return;

    DeleteList(head.nextNode);

    head.nextNode = null;
}

function printList(head: ListNode) {
    let current: ListNode | null = head;

    while (current != null) {
        console.log(current.value);
        current = current.nextNode;
    }

    console.log("end");
}

let node1: ListNode = {
    value: 1,
    nextNode: null
};

let node2: ListNode = {
    value: 2,
    nextNode: null
}

let node3: ListNode = {
    value: 3,
    nextNode: null
}

let node4: ListNode = {
    value: 4,
    nextNode: null
}

node1.nextNode = node2;
node2.nextNode = node3;
node3.nextNode = node4;

printList(node1);
DeleteList(node1);
printList(node1);