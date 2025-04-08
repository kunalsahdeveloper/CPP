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
      
            ListNode* dummy= new ListNode(-1);
            ListNode* curr  = dummy;
    
            ListNode* h1 = l1;
            ListNode* h2 = l2;
            int carry=0, sum;
    
            while(h1 != NULL || h2 != NULL){
                
                sum = carry;
                if(h1) sum += h1->val;
                if(h2) sum += h2->val;
    
                ListNode* newNode = new ListNode(sum%10);
                curr->next = newNode;
    
                carry = sum/10;
                if(h1) h1 = h1->next;
                if(h2) h2 = h2->next;
                curr = curr->next;
    
            }
    
            if (carry)
            curr->next = new ListNode(carry);
            
            return dummy->next;
            
        }
    };