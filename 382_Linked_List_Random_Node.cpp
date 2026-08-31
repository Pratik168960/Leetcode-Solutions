// LeetCode Problem 382_Linked_List_Random_Node
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
private:
    ListNode* head;
    
public:
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int result = 0;
        ListNode* curr = head;
        int i = 1;
        
        while (curr != nullptr) {

            if (rand() % i == 0) {
                result = curr->val;
            }
            curr = curr->next;
            i++;
        }
        
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
