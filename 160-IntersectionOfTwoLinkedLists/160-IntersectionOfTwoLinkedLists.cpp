// Last updated: 7/26/2026, 4:22:23 PM
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        while (ptrA != ptrB) {
            if (ptrA == nullptr) ptrA = headB;
            else ptrA = ptrA->next; 
            if (ptrB == nullptr) ptrB = headA;
            else ptrB = ptrB->next;
        }
        return ptrA; 
    }
};