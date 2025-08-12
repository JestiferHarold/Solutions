/**
 * Iterative Preorder traversal
 */

interface TreeNode {
    value: number;
    leftChild: TreeNode | null;
    rightChild: TreeNode | null;
}

function preorderTraversal(root: TreeNode) {
    let stack: Array<TreeNode> = new Array();

    stack.push(root);

    while (stack.length != 0) {

        //@ts-ignore
        let element: TreeNode = stack.pop()
        console.log(element.value);
        if (element.rightChild != null) stack.push(element.rightChild)
        if (element.leftChild != null) stack.push(element.leftChild)

    }
}