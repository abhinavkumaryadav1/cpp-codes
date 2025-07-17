#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// TreeNode definition (same as LeetCode)
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Solution class with Morris Inorder Traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        TreeNode* current = root;

        while (current != NULL) {
            if (current->left == NULL) {
                result.push_back(current->val);
                current = current->right;
            } else {
                TreeNode* pre = current->left;
                while (pre->right != NULL && pre->right != current) {
                    pre = pre->right;
                }

                if (pre->right == NULL) {
                    pre->right = current;  // thread the tree
                    current = current->left;
                } else {
                    pre->right = NULL;  // restore the tree
                    result.push_back(current->val);
                    current = current->right;
                }
            }
        }

        return result;
    }
};

// Helper to build a sample binary tree
TreeNode* buildSampleTree() {
    /*
          1
           \
            2
           /
          3
    */

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    return root;
}

int main() {
    TreeNode* root = buildSampleTree();  // Sample tree

    Solution sol;
    vector<int> result = sol.inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
