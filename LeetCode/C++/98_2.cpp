class Solution {
private:
    bool validate(TreeNode* root, long min, long max) {
        if (root == nullptr) {
            return true;
        }

        if (root->val >= max || root->val <= min) {
            return false;
        }

        return validate(root->left, min, root->val) && validate(root->right, root->val, max);
    }

public:
    bool isValidBST(TreeNode* root) {
        return this->validate(root, LONG_MIN, LONG_MAX);
    }
};