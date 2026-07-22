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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return NULL;
        }
       
        int count=0;
        ListNode*temp=head;
        while(temp!=nullptr ){
            count++;
            temp=temp->next;
        }
        temp=head;
        int i=1;
        while(i<(count-n)){
            temp=temp->next;
            i++;
        }
        // If head needs to be deleted
        if (count == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* NodeToDelete=temp->next;
        temp->next=NodeToDelete->next;
        delete NodeToDelete;

        return head;
        
    }
};