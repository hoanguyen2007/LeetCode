// Last updated: 7/26/2026, 4:22:25 PM
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                ListNode* ptr=head;
                while(ptr!=slow){
                    ptr=ptr->next;
                    slow=slow->next;
                }
                return ptr;
            }
        }
        return nullptr;
    }
};