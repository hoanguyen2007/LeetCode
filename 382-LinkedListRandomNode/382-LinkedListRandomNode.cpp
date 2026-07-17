// Last updated: 7/17/2026, 11:09:19 AM
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        while(l1!=NULL){s1.push(l1->val);
            l1=l1->next;           
      }
        
          while(l2!=NULL){s2.push(l2->val);
            l2=l2->next;           
      }
        
        int carry=0;
      ListNode* head=NULL; 
        
        while(!s1.empty() || !s2.empty() || carry!=0){
            
           int d1=s1.empty()?0:s1.top();
           int d2=s2.empty()?0:s2.top();
            
            if(!s1.empty()){s1.pop();}
            if(!s2.empty()){s2.pop();}
            
            int sum=d1+d2+carry;
            carry=sum/10;
            int d=sum%10;
            
            ListNode* newNode=new ListNode(d);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
    
};