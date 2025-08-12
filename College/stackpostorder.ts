/**
 * Iterative post order traversal
 */

interface TreeNode {
    value: number;
    leftChild: TreeNode | null;
    rightChild: TreeNode | null;
}

function postorderTraversal(root: TreeNode) {
    
    let stack1 = new Array()
    let stack2 = new Array()

    stack1.push(root)

    while (stack1.length != 0) {
        let element: TreeNode = stack1.pop()

        if (element.leftChild != null) stack1.push(element.leftChild)
        if (element.rightChild != null) stack1.push(element.rightChild)

        stack2.push(element)
    }

    while (stack2.length != 0) {
        console.log(stack2.pop().value)
    }
}