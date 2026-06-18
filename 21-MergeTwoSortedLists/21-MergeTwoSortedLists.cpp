// Last updated: 6/18/2026, 3:59:25 PM
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        ListNode dummy(0); 
5        ListNode* tail = &dummy;
6        
7        while (list1 != nullptr && list2 != nullptr) {
8            if (list1->val <= list2->val) {
9                tail->next = list1; 
10                list1 = list1->next; 
11            } else {
12                tail->next = list2; 
13                list2 = list2->next; 
14            }
15            tail = tail->next;       
16        }
17        tail->next = (list1 != nullptr) ? list1 : list2;
18        return dummy.next;
19    }
20};