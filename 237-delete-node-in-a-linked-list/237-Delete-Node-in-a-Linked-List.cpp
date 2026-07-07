/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;       //4 → 5 → 1 → 9

        node->next = node->next->next;    // copy 1 to 5        4 → 1 → 1 → 9
                                          // so final 4-> 1-> 9
    
                                                                                     //node
    }
};