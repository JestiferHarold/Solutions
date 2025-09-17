#include <vector>

using namespace std;

class Solution {
private:

    vector<int> v;
    void inOrderTraversal(TreeNode* root) {
        if (root == nullptr) return ;

        inOrderTraversal(root->left);
        v.push_back(root->val);
        inOrderTraversal(root->right);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        inOrderTraversal(root);

        if (v.size() < k) {
            return -1;
        }

        return v[k - 1];
    }
};