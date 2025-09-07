#include <iostream>

using namespace std;

class TreeNode {
    public:
        TreeNode* left;
        TreeNode* right;
        int val;
        TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr) {
            this->val = val;
            this->left = left;
            this->right = right;
        }
};

class TreeNodeWithParent {

};