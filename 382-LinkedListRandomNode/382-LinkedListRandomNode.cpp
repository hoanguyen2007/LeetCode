// Last updated: 7/17/2026, 10:51:34 AM
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
12private:
13    ListNode* headNode;
14public:
15    Solution(ListNode* head) {
16        headNode = head;
17    }
18    
19    int getRandom() {
20        ListNode* current = headNode;
21        int result = 0;
22        int i = 1;
23        while (current!=nullptr){
24            if (rand() % i == 0) {
25                result = current->val;
26            }
27            i++;
28            current = current->next;
29        }
30        return result;
31    }
32};
33
34/**
35 * Your Solution object will be instantiated and called as such:
36 * Solution* obj = new Solution(head);
37 * int param_1 = obj->getRandom();
38 */