/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        //we cannot just return slow or fast kyunki woh cycle ke andar kisi bhi point pe meet kar sakte hai but not necesarily towards the start of the cycle 
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *start=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=start){
                    slow=slow->next;
                    start=start->next;
                }
                return start;
            }
           
        }
         return NULL;

        
    }
};