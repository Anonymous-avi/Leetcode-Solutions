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
    bool hasCycle(ListNode *head) {
        //brute approach but iski TC O(N) hai and SC O(N) therefore it is bad
      //  unordered_set<ListNode*>st;
       // ListNode* temp=head;
       // while(temp!=nullptr){
       //     if(st.find(temp)!=st.end()){
        //        return true ;
        //    }

        //    st.insert(temp);
        //    temp=temp->next;

        //}
        //return false;
        ListNode* slow=head; //yeh optimal solution hai kyunki ismie koi bhi extra space nhi use kar rhe hum 
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
             
             if(slow==fast){
                return true ;
             }

        }
        return false;
    }
};