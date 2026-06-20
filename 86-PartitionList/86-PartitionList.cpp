// Last updated: 6/20/2026, 3:38:07 PM
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
13    ListNode* partition(ListNode* head, int x) {
14        ListNode* result1 = new ListNode(0);
15        ListNode* result2 = new ListNode(0);
16        if (head==nullptr || head->next == nullptr){
17            return head;
18        }
19        ListNode* dau = result1;
20        ListNode* duoi = result2;
21        while (head!=nullptr){
22            if (head->val < x){
23                result1->next = new ListNode(head->val);
24                result1 = result1->next;
25            }
26            else {
27                result2->next = new ListNode(head->val);
28                result2 = result2->next;
29            }
30            head = head->next;
31        }
32        result1->next = duoi->next;
33        return dau->next;
34    }
35};