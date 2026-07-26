// Last updated: 7/26/2026, 4:22:44 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* dummy = new ListNode (0, head);
        int length = 0;
        ListNode* current = head;
        while (current != nullptr) {
            length++;
            current = current->next;
        }
        current = dummy;
        for (int i=0 ;i <length-n;i++){
            current = current ->next;
        }
        ListNode* NodetoDelete = current->next;
        current->next = current->next->next;
        delete NodetoDelete;
        ListNode* result = dummy->next;
        delete dummy;
        
        return result;
        
    }
};