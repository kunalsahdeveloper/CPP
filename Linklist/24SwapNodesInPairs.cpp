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
        ListNode* swapPairs(ListNode* head) {
    
            ListNode dummy = ListNode();
            ListNode* t1 = &dummy;
            t1->next = head;
            ListNode* curr1, *curr2;
    
            while(t1->next && t1->next->next){
                curr1 = t1->next;
                curr2 = t1->next->next;
                
                curr1->next = curr2->next;
                curr2->next = curr1;
    
                t1->next = curr2;
                t1 = curr1;
            }
    
            return dummy.next;
            
        }
    };