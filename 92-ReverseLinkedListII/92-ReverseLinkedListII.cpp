// Last updated: 7/3/2026, 12:33:52 PM
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        if (left == right) return head;
15        int count = 1;
16        ListNode* dummy = new ListNode(0);
17        dummy->next = head;
18        ListNode* prev = dummy;
19        ListNode* latter = dummy;
20        while (count<=right+1){
21            if (count<left){
22                prev = prev->next;
23            }
24            latter = latter->next;
25            count++;
26        }
27        head = prev->next;
28        ListNode* realLatter = latter;
29        while (true){
30            if (head == realLatter){
31                prev->next = latter;
32                break;
33            }
34            ListNode* temp = head->next;
35            head->next = latter;
36            latter = head;
37            head = temp;
38        }
39        return dummy->next;
40    }
41};