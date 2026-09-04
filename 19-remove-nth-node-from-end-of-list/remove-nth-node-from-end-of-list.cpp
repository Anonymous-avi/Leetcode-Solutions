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
    private:
    ListNode*  reverseList(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            ListNode* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return NULL;
        }
        head=reverseList(head);
        if(n==1){
                ListNode* temp = head;
                head=head->next;
                delete temp;

        } else{
            ListNode* temp = head ;
            for(int i=1 ; i<n-1 ; i++){
                temp=temp->next;
            }
            ListNode* deleteNode = temp->next;
            temp->next=deleteNode->next;
            delete deleteNode;
        }

        head = reverseList(head);

        return head;
       
        
    }
};