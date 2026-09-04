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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* curr = headA ;
      int a =0;

      while(curr!=nullptr){
        a++;
        curr=curr->next;

      }
      curr=headB;
      int b=0;
      while(curr!=nullptr){
        b++;
        curr=curr->next;
      }

      int diff = abs(a-b);

      if(a<b){
        while(diff--){
            headB=headB->next;
        }
      }else{
        while(diff--){
            headA=headA->next;
        }

      }
      ListNode* tempA = headA;
      ListNode* tempB = headB;
      while(tempA!=nullptr && tempB!=nullptr){
         if(tempA==tempB){
            return tempA;
        }
        tempA=tempA->next;
        tempB=tempB->next;
      }
        
       

      return nullptr;
        
    }
};