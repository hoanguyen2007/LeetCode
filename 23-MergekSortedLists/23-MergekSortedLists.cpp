// Last updated: 6/26/2026, 3:41:02 PM
1class Solution {
2    struct CompareNode {
3        bool operator()(ListNode* const& p1, ListNode* const& p2) {
4            return p1->val > p2->val;
5        }
6    };
7
8public:
9    ListNode* mergeKLists(vector<ListNode*>& lists) {
10        priority_queue<ListNode*, vector<ListNode*>, CompareNode> minHeap;
11
12        for (ListNode* head : lists) {
13            if (head != nullptr) {
14                minHeap.push(head);
15            }
16        }
17
18        ListNode* dummy = new ListNode(0);
19        ListNode* current = dummy;
20
21        while (!minHeap.empty()) {
22            ListNode* curr = minHeap.top();
23            minHeap.pop();
24
25            current->next = curr;
26            current = current->next;
27
28            if (curr->next != nullptr) {
29                minHeap.push(curr->next);
30            }
31        }
32
33        ListNode* newHead = dummy->next;
34        delete dummy; 
35        
36        return newHead;
37    }
38};