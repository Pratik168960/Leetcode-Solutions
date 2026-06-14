// LeetCode Problem 2130_Maximum_Twin_Sum_of_a_Linked_List
// Status: Accepted
// Language: C++

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> vals;
        
        while (head) {
            vals.push_back(head->val);
            head = head->next;
        }
        
        int max_sum = 0;
        int n = vals.size();
        for (int i = 0; i < n / 2; ++i) {
            max_sum = max(max_sum, vals[i] + vals[n - 1 - i]);
        }
        
        return max_sum;
    }
};
