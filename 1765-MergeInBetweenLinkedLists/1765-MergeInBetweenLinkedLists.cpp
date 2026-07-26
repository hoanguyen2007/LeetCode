// Last updated: 7/26/2026, 4:21:52 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* node_a1 = list1;
        for (int i = 0;i<a-1;i++){
            node_a1 = node_a1->next;
        }
        ListNode* node_a2= node_a1;
        for (int i =0;i<b-a+2;i++){
            node_a2 = node_a2->next;
        }
        ListNode* list2_tail = list2;
        while (list2_tail->next!=nullptr){
            list2_tail = list2_tail->next;
        }
        node_a1->next = list2;
        list2_tail->next = node_a2;
        return list1;
    }
};