// Last updated: 7/26/2026, 4:22:41 PM
class Solution {
    struct CompareNode {
        bool operator()(ListNode* const& p1, ListNode* const& p2) {
            return p1->val > p2->val;
        }
    };

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, CompareNode> minHeap;

        for (ListNode* head : lists) {
            if (head != nullptr) {
                minHeap.push(head);
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (!minHeap.empty()) {
            ListNode* curr = minHeap.top();
            minHeap.pop();

            current->next = curr;
            current = current->next;

            if (curr->next != nullptr) {
                minHeap.push(curr->next);
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy; 
        
        return newHead;
    }
};