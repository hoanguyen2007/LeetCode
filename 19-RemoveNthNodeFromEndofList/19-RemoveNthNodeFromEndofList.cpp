// Last updated: 6/17/2026, 10:27:33 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        
15        ListNode* dummy = new ListNode (0, head);
16        int length = 0;
17        ListNode* current = head;
18        while (current != nullptr) {
19            length++;
20            current = current->next;
21        }
22        current = dummy;
23        for (int i=0 ;i <length-n;i++){
24            current = current ->next;
25        }
26        ListNode* NodetoDelete = current->next;
27        current->next = current->next->next;
28        delete NodetoDelete;
29        ListNode* result = dummy->next;
30        delete dummy;
31        
32        return result;
33        
34    }
35};