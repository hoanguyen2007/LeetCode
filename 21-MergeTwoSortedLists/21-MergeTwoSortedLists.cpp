// Last updated: 6/18/2026, 4:35:37 PM
1class Solution {
2public:
3    ListNode* swapPairs(ListNode* head) {
4        ListNode dummy(0);
5        dummy.next = head;
6        ListNode* prev = &dummy;
7        while (prev->next != nullptr && prev->next->next != nullptr) {
8            ListNode* node1 = prev->next;
9            ListNode* node2 = prev->next->next;
10            
11            prev->next = node2;
12            
13            node1->next = node2->next; 
14            node2->next = node1;       
15            
16            prev = node1; 
17        }
18        
19        return dummy.next;
20    }
21};