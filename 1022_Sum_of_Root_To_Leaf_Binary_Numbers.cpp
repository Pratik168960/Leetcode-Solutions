// LeetCode Problem 1022_Sum_of_Root_To_Leaf_Binary_Numbers
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
    int total = 0 ;

public:
    int sumRootToLeaf(TreeNode* root) {
        findSum(root, 0) ;
        return total ; 
    }
    
    void findSum(TreeNode* node, int current) {
        if (node == nullptr) {
            return ;
        }
        
        current = current * 2 + node->val ;
        
        if (node->left == nullptr && node->right == nullptr) {
            total = total + current ;
        }
        
        findSum(node->left, current) ;
        findSum(node->right, current) ;
    }
};
