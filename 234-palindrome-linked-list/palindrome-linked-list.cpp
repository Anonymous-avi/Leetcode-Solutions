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
    bool isPalindrome(ListNode* head) {
      //this is brute approach highly easy one ...but isse space complexity increase ho ajayegi
      // vector<int>vec;
      // ListNode*temp=head;
      // while(temp!=nullptr){
      //  vec.push_back(temp->val);
       // temp=temp->next;
       //}
      // int left=0;
      // int right=vec.size()-1;
      // while(left<=right){
        //if(vec[left]!=vec[right] && left<=right){
          //  return false;
        //}
        //left++;
        //right--;
       //}

       //return true;


       //OPTIMAL APPROACH 
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;

       }
       
       ListNode*first=head;
       ListNode*second=reverseMiddle(slow->next);
       while(second!=nullptr){
        if(first->val!=second->val){
            return false;
        }
        first=first->next;
        second=second->next;
       }
       return true;

        
    }

private:
ListNode* reverseMiddle(ListNode*head){
    ListNode*prev=nullptr;
    ListNode*current=head;
    while(current!=nullptr){
        ListNode*next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
};