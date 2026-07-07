// Last updated: 7/7/2026, 9:43:31 PM
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
13    ListNode* oddEvenList(ListNode* head) {
14        if (head == nullptr or head->next == nullptr) return head;
15        ListNode* dummy = head;
16        ListNode* evenNode = head->next;
17        ListNode* dummy2 = evenNode;
18        while (head!=nullptr &&head->next!=nullptr && evenNode->next!=nullptr){
19            head->next = head->next->next;
20            head = head->next;
21            evenNode->next = head->next;
22            evenNode = evenNode->next;
23        }
24        head->next = dummy2;
25        head = dummy;
26        return head;
27    }
28};