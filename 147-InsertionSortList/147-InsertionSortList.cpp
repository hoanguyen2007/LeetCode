// Last updated: 6/24/2026, 10:41:08 PM
1class Solution {
2public:
3    ListNode* insertionSortList(ListNode* head) {
4        if (head == nullptr || head->next == nullptr) {
5            return head;
6        }
7
8        ListNode* dummy = new ListNode(0, head);
9        ListNode* lastSorted = head;
10        ListNode* curr = head->next;
11
12        while (curr != nullptr) {
13            if (lastSorted->val <= curr->val) {
14                lastSorted = lastSorted->next;
15            } else {
16                ListNode* prev = dummy;
17                
18                while (prev->next->val <= curr->val) {
19                    prev = prev->next;
20                }
21                
22                lastSorted->next = curr->next;
23                curr->next = prev->next;
24                prev->next = curr;
25            }
26            curr = lastSorted->next;
27        }
28
29        ListNode* sortedHead = dummy->next;
30        delete dummy; 
31        
32        return sortedHead;
33    }
34};