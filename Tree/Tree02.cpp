//binary tree inorder traversal

#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != nullptr || !st.empty()) {
            // Reach the leftmost node of the current subtree
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }
            // Process the top node
            curr = st.top();
            st.pop();
            result.push_back(curr->val);
            // Visit the right subtree
            curr = curr->right;
        }
        return result;
    }
};


TreeNode* buildTree() {
    // Example: root = [1, null, 2, 3]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    return root;
}

int main() {
    Solution sol;
    TreeNode* root = buildTree();
    vector<int> inorder = sol.inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int val : inorder) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
