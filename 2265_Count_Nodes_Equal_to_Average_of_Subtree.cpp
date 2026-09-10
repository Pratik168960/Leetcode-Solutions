// LeetCode Problem 2265_Count_Nodes_Equal_to_Average_of_Subtree
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
    int ans = 0;
    
    pair<int, int> dfs(TreeNode* root) {
        if (!root) return {0, 0};
        

        auto [ls, lc] = dfs(root->left);
        auto [rs, rc] = dfs(root->right);
        

        int sum = ls + rs + root->val;
        int count = lc + rc + 1;
        

        if (root->val == sum / count) {
            ans++;
        }
        
        return {sum, count};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
