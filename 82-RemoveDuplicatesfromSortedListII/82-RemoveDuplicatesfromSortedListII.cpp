// Last updated: 6/20/2026, 4:38:59 PM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        ListNode* result = new ListNode (0);
15        ListNode* fast = head;
16        ListNode* slow = head;
17        ListNode* dummy = result;
18        while (slow != nullptr && fast != nullptr){
19            if (slow == fast)
20            {
21                if ( fast->next == nullptr || fast->val != fast->next->val)
22                {
23                    result->next = slow;
24                    result = result->next;
25                    if (fast->next == nullptr) break;
26                    fast = fast->next;
27                    slow = slow->next;
28                }
29                else
30                {
31                    if (fast->next == nullptr) break;
32                    fast = fast->next;
33                }
34            }
35            else
36            {
37                if (fast->next == nullptr || fast->val != fast->next->val)
38                {
39                    if (fast->next == nullptr) break;
40                    slow = fast->next;
41                    fast = fast->next;
42                }
43                else {
44                    if (fast->next == nullptr) break;
45                    fast = fast->next;
46                }
47            }
48        }
49        result->next = nullptr;
50        return dummy->next;
51    }
52};