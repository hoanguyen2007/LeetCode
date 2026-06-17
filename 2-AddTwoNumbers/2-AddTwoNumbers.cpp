// Last updated: 6/17/2026, 9:37:04 PM
1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4        ListNode* dummyHead = new ListNode(0);
5        ListNode* current = dummyHead;
6        int carry = 0;
7
8        while (l1 != nullptr || l2 != nullptr || carry != 0) {
9            int x = (l1 != nullptr) ? l1->val : 0;
10            int y = (l2 != nullptr) ? l2->val : 0;
11            
12            int sum = carry + x + y;
13            carry = sum / 10;       
14            current->next = new ListNode(sum % 10);
15            current = current->next;
16            if (l1 != nullptr) l1 = l1->next;
17            if (l2 != nullptr) l2 = l2->next;
18        }
19
20        ListNode* result = dummyHead->next;
21
22        delete dummyHead; 
23        
24        return result;
25    }
26};