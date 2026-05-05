// LeetCode Problem 67_Rotate_List
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        
        ListNode* t = head;
        int n = 1;
        while (t->next) {
            t = t->next;
            n++;
        }
        
        t->next = head;
        k = n - (k % n);
        
        while (k--) {
            t = t->next;
        }
        
        head = t->next;
        t->next = nullptr;
        
        return head;
    }
};
