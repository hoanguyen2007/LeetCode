// Last updated: 7/15/2026, 9:40:55 PM
1class Solution {
2public:
3    ListNode *detectCycle(ListNode *head) {
4        if(head == NULL || head->next == NULL) return nullptr;
5        
6        ListNode* slow = head;
7        ListNode* fast = head;
8        
9        while(fast != NULL && fast->next != NULL){
10            slow = slow->next;
11            fast = fast->next->next;
12            
13            if(slow == fast){
14                ListNode* entry = head; 
15                   while(entry != slow) {
16                    entry = entry->next;
17                    slow = slow->next;
18                }
19                
20                return entry; 
21                }
22        }
23        return nullptr; 
24    }
25};