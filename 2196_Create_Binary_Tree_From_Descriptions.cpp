// LeetCode Problem 2196_Create_Binary_Tree_From_Descriptions
// Status: Accepted
// Language: C++ 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> m;
        unordered_map<int, bool> c;
        
        for (auto& v : descriptions) {
            if (!m[v[0]]) m[v[0]] = new TreeNode(v[0]);
            if (!m[v[1]]) m[v[1]] = new TreeNode(v[1]);
            
            v[2] ? m[v[0]]->left = m[v[1]] : m[v[0]]->right = m[v[1]];
            c[v[1]] = true;
        }
        
        for (auto& v : descriptions) {
            if (!c[v[0]]) return m[v[0]];
        }
        
        return nullptr;
    }
};
