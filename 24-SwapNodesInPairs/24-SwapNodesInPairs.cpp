// Last updated: 7/26/2026, 4:22:40 PM
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        while (prev->next != nullptr && prev->next->next != nullptr) {
            ListNode* node1 = prev->next;
            ListNode* node2 = prev->next->next;
            
            prev->next = node2;
            
            node1->next = node2->next; 
            node2->next = node1;       
            
            prev = node1; 
        }
        
        return dummy.next;
    }
};