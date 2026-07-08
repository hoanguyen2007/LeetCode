// Last updated: 7/8/2026, 9:23:33 PM
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
13    void reorderList(ListNode* head) {
14if (head == nullptr || head->next == nullptr || head->next->next == nullptr) return;
15        ListNode* dummy = new ListNode(0);
16        ListNode* fast = head;
17        ListNode* slow = head;
18        while (fast->next != nullptr && fast->next->next != nullptr){
19            slow = slow->next;
20            fast = fast->next->next;
21        }
22        ListNode* cur = slow->next;
23        slow->next = nullptr;
24        ListNode* prev = nullptr;
25        while (cur!=nullptr){
26            ListNode* tempnext = cur->next;
27            cur->next = prev;
28            prev = cur;
29            cur = tempnext;
30        }
31        ListNode* first = head;
32        ListNode* second = prev;
33        while (second!=nullptr){
34            ListNode* firsttemp = first->next;
35            ListNode* secondtemp = second->next;
36            first->next = second;
37            second->next = firsttemp;
38            second = secondtemp;
39            first = firsttemp;
40        }
41    }
42};