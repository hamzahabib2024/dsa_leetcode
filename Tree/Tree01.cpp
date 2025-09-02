//Binary Tree Postorder Traversal

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        stack<TreeNode*> st;
        TreeNode* lastVisited = nullptr;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            // Go as left as possible
            if (curr) {
                st.push(curr);
                curr = curr->left;
            } else {
                TreeNode* node = st.top();
                // if right child exists and is not processed yet
                if (node->right && lastVisited != node->right) {
                    curr = node->right;
                } else {
                    result.push_back(node->val);
                    lastVisited = node;
                    st.pop();
                }
            }
        }
        return result;
    }
};

// Example usage
int main() {
    // Example tree: [1,null,2,3]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> ans = sol.postorderTraversal(root);

    cout << "Postorder Traversal: ";
    for (int val : ans) cout << val << " ";
    cout << endl;

    return 0;
}
