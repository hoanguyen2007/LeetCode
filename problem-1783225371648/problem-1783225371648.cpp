// Last updated: 7/5/2026, 11:22:51 AM
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
11/**
12 * Definition for a binary tree node.
13 * struct TreeNode {
14 *     int val;
15 *     TreeNode *left;
16 *     TreeNode *right;
17 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
18 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
19 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
20 * };
21 */
22class Solution {
23public:
24    TreeNode* convertToBST (ListNode* head, ListNode* tail){
25        if (head == tail) return nullptr;
26        ListNode* fast = head;
27        ListNode* slow = head;
28        while (fast != tail && fast->next != tail){
29            slow = slow->next;
30            fast = fast->next->next;
31        }   
32        TreeNode* root = new TreeNode(slow->val);
33        root->left = convertToBST(head,slow);
34        root->right = convertToBST(slow->next,tail);
35        return root;
36    }
37    TreeNode* sortedListToBST(ListNode* head) {
38        return convertToBST(head,nullptr);
39    }
40};