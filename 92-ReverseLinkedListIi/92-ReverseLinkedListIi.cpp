// Last updated: 7/26/2026, 4:22:30 PM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        int count = 1;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* latter = dummy;
        while (count<=right+1){
            if (count<left){
                prev = prev->next;
            }
            latter = latter->next;
            count++;
        }
        head = prev->next;
        ListNode* realLatter = latter;
        while (true){
            if (head == realLatter){
                prev->next = latter;
                break;
            }
            ListNode* temp = head->next;
            head->next = latter;
            latter = head;
            head = temp;
        }
        return dummy->next;
    }
};