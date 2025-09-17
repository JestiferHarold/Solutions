#include <vector>

using namespace std;

class Solution {
public:

    vector<int> v;

    void helperFunction(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        helperFunction(root->left);
        this->v.push_back(root->val);
        helperFunction(root->right);
    }

    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;

        helperFunction(root);

        for(int i = 0; i < (int)this->v.size() - 1; i ++) {
            if (this->v[i] == this->v[i + 1]) {
                return false;
            }

            if (this->v[i] > this->v[i + 1]) {
                return false;
            }
        }

        return true;
    }
};