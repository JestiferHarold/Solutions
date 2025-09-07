#include <iostream>

class TreeNode {
    public:
        TreeNode* right;
        TreeNode* left;
        TreeNode* parent;
        int val;

        TreeNode(int val, TreeNode* right = nullptr, TreeNode* left = nullptr, TreeNode* parent = nullptr) {
            this->val = val;
            this->right = right;
            this->left = left;
            this->parent = parent;
        }
};

