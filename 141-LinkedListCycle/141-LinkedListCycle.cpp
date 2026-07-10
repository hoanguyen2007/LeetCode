// Last updated: 7/10/2026, 12:08:37 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        if (head == nullptr || head->next == nullptr) {
13            return false;
14        }
15
16        ListNode *slow = head;
17        ListNode *fast = head;
18
19        while (fast != nullptr && fast->next != nullptr) {
20            slow = slow->next;         
21            fast = fast->next->next; 
22            if (slow == fast) {
23                return true; 
24            }
25        }
26
27        return false; 
28    }
29};