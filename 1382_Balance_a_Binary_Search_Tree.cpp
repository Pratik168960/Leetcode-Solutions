// LeetCode Problem 1382_Balance_a_Binary_Search_Tree
// Status: Accepted
// Language: C++

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> sortedNodes;

    TreeNode* balanceBST(TreeNode* root) {
        inorderTraversal(root);
        
        return buildTree(0, sortedNodes.size() - 1);
    }

private:
    void inorderTraversal(TreeNode* root) {
        if (root == nullptr) return;
        inorderTraversal(root->left);
        sortedNodes.push_back(root->val);
        inorderTraversal(root->right);
    }

    TreeNode* buildTree(int start, int end) {
        if (start > end) return nullptr;

        int mid = start + (end - start) / 2;
        
        TreeNode* node = new TreeNode(sortedNodes[mid]);
        
        node->left = buildTree(start, mid - 1);
        node->right = buildTree(mid + 1, end);
        
        return node;
    }
};
