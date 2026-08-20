class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;

        while (curr) {
            if (curr->left) {
                TreeNode* temp = curr->left;

                // Find rightmost node of left subtree
                while (temp->right) {
                    temp = temp->right;
                }

                // Connect original right subtree
                temp->right = curr->right;

                // Move left subtree to right
                curr->right = curr->left;
                curr->left = nullptr;
            }

            curr = curr->right;
        }
    }
};