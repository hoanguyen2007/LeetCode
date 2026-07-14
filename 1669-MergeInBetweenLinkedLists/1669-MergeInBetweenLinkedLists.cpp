// Last updated: 7/14/2026, 11:08:20 AM
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
13    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
14        ListNode* node_a1 = list1;
15        for (int i = 0;i<a-1;i++){
16            node_a1 = node_a1->next;
17        }
18        ListNode* node_a2= node_a1;
19        for (int i =0;i<b-a+2;i++){
20            node_a2 = node_a2->next;
21        }
22        ListNode* list2_tail = list2;
23        while (list2_tail->next!=nullptr){
24            list2_tail = list2_tail->next;
25        }
26        node_a1->next = list2;
27        list2_tail->next = node_a2;
28        return list1;
29    }
30};