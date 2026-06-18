// Last updated: 6/18/2026, 3:56:24 PM
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        if (list1==nullptr) return list2;
15        else if (list2==nullptr) return list1;
16        ListNode* result = new ListNode ();
17        if (list1->val >= list2->val)
18        {
19            result->val = list2->val;
20            list2 = list2->next;
21        }
22        else if (list2->val >= list1->val)
23        {
24            result->val = list1->val;
25            list1 = list1->next;
26        }
27        ListNode* dummyNode = new ListNode (0);
28        dummyNode->next = result;
29        while (true){
30            ListNode* valu = new ListNode();
31            if (list1!=nullptr && list2!=nullptr && list1->val >= list2->val )
32            {
33                valu->val = list2->val;
34                list2= list2->next;
35            } 
36            else if (list1!=nullptr && list2!=nullptr && list2->val > list1->val)
37            {
38                valu->val = list1->val;
39                list1 = list1->next;
40            }
41            else if (list1==nullptr){
42                valu->val = list2->val;
43                list2 = list2->next;
44            } 
45            else if (list2==nullptr){
46                valu->val = list1->val;
47                list1 = list1->next;
48            }
49            result->next = valu;
50            result = result->next;
51            if (list1==nullptr && list2==nullptr) break;
52        }
53        result = dummyNode->next;
54        delete dummyNode;
55        return result;
56    }
57};