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
    ListNode* reverseList(ListNode* head) {
        //brute approach TC=O(2N)  SC = O(N)
      // if(head==nullptr || head->next==nullptr){
        //return head;
       //}
     //stack<int>st;
     //ListNode*temp=head;
     //while(temp!=nullptr){
     //   st.push(temp->val);
       // temp=temp->next;

     //}
     //temp=head;
     //while(temp!=nullptr){
       // temp->val=st.top();
        //st.pop();
     //}
     //return head;



     ListNode* prev=nullptr;
     ListNode* current=head;
     while(current!=nullptr){
        ListNode* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
     }
     return prev;
        
    }
};