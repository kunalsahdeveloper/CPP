/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0)x, next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
    
            //below code give T.C = O(2n) & S.C = O(n)
    
            // if( head == NULL || head->next == NULL)
            //     return head;
    
            
            // vector<int> v;
            // ListNode* temp = head;
    
    
            // //for odd indexes O(n/2)
            // while(temp != NULL && temp->next !=NULL){
    
            //     v.push_back(temp->val);
            //     temp = temp->next->next;
            // }
            // if(temp) v.push_back(temp->val);
    
            // //for even indexes O(n/2)
            // temp = head->next;
            // while(temp != NULL && temp->next != NULL){
            //     v.push_back(temp->val);
            //     temp = temp->next->next;
            // }
            // if(temp) v.push_back(temp->val);
    
            // // this give O(n)
            // temp=head;
            // int i=0;
            // while(temp!=NULL){
            //     temp->val = v[i];
            //     i++;
            //     temp = temp->next;
            // }
            // return head;
    
    
            //optimal code
    
            if(head ==NULL || head->next == NULL)
                return head;
    
            ListNode* odd = head;
            ListNode* even = head->next;
            ListNode* evenHead = head->next;
    
            //T.C = O(n/2)*2 = O(n)
            while(even != NULL && even->next != NULL){
                odd->next = odd->next->next; 
                even->next = even->next->next;
    
                odd = odd->next;
                even = even->next;
            } 
            odd->next = evenHead;
    
    
            return head;
    
            
        }
    };