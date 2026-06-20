// Last updated: 6/20/2026, 4:39:30 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode* dummy = new ListNode(0, head);
5        ListNode* prev = dummy;
6        
7        while (head != nullptr) {
8            if (head->next != nullptr && head->val == head->next->val) {
9                while (head->next != nullptr && head->val == head->next->val) {
10                    head = head->next;
11                }
12                prev->next = head->next;
13            } else {
14                prev = prev->next;
15            }
16            head = head->next;
17        }
18        
19        ListNode* result = dummy->next;
20        delete dummy; 
21        
22        return result;
23    }
24};