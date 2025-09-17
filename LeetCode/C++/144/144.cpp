#include <vector>
#include <stack>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void traverse(TreeNode* root, vector<int>& a) {
        if (root == nullptr) return;

        a.push_back(root->val);
        traverse(root->left, a);
        traverse(root->right, a);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;

        traverse(root, v);

        return v;

    }
};