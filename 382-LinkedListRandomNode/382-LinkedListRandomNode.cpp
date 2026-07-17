// Last updated: 7/17/2026, 11:07:43 AM
1
2/**
3 * Definition for singly-linked list.
4 * struct ListNode {
5 *     int val;
6 *     ListNode *next;
7 *     ListNode() : val(0), next(nullptr) {}
8 *     ListNode(int x) : val(x), next(nullptr) {}
9 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
10 * };
11 */
12class Solution {
13public:
14    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
15        stack <int> s1,s2;
16        while (l1!=nullptr){
17            s1.push(l1->val);
18            l1 = l1->next;
19        }
20        while (l2!=nullptr){
21            s2.push(l2->val);
22            l2 = l2->next;
23        }
24        int carry = 0;
25        ListNode* head = nullptr;
26        while (!s1.empty() || !s2.empty() || carry>0){
27            int sum = carry;
28            if (!s1.empty()) {
29                sum += s1.top();
30                s1.pop();
31            }
32            if (!s2.empty()) {
33                sum += s2.top();
34                s2.pop();
35            }
36            carry = sum / 10;
37            ListNode* newNode = new ListNode(sum % 10);
38            newNode->next = head;
39            head = newNode;
40        } 
41        return head;
42    }
43};