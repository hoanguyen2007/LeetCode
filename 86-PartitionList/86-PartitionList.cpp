// Last updated: 6/20/2026, 3:40:37 PM
1class Solution {
2public:
3    ListNode* partition(ListNode* head, int x) {
4        ListNode* lessHead = new ListNode(0);
5        ListNode* greaterHead = new ListNode(0);
6        
7        ListNode* less = lessHead;
8        ListNode* greater = greaterHead;
9        
10        while (head != nullptr) {
11            if (head->val < x) {
12                less->next = head;
13                less = less->next;
14            } else {
15                greater->next = head;
16                greater = greater->next;
17            }
18            head = head->next;
19        }
20        
21        greater->next = nullptr; 
22        less->next = greaterHead->next; 
23        
24        ListNode* result = lessHead->next;
25        
26        delete lessHead;
27        delete greaterHead;
28        
29        return result;
30    }
31};