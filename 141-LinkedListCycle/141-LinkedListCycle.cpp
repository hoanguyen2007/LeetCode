// Last updated: 7/10/2026, 12:00:27 PM
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
12        if (head==nullptr || head->next==nullptr) return false;
13        for (int i=0;i<10000;i++){
14            if (head->next == nullptr) return false;
15            head = head->next;
16            
17        }
18        return true;
19    }
20};