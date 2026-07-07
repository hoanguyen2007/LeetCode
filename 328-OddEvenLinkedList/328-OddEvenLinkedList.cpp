// Last updated: 7/7/2026, 9:46:30 PM
1class Solution {
2public:
3    ListNode* oddEvenList(ListNode* head) {
4        // Xử lý ngoại lệ: danh sách rỗng hoặc chỉ có 1 node
5        if (head == nullptr || head->next == nullptr) return head;
6        
7        ListNode* odd = head;                
8        ListNode* even = head->next;         
9        ListNode* evenHead = even;           
10        while (even != nullptr && even->next != nullptr) {
11            odd->next = even->next;
12            odd = odd->next;
13            
14            even->next = odd->next;
15            even = even->next;
16        }
17
18        odd->next = evenHead;
19        
20        return head;
21    }
22};