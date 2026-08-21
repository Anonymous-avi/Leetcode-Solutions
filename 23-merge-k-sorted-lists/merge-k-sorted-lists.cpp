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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //brute approach is ki saari lists ko ek array mei daal dein...fir usse sort kar denge ...and then finally usse sorted array ko linked list mei convert kar denge 

       vector<int>res;
       //step 1 : pehle list ko vector mei add kiya 
       for(int i=0 ; i<lists.size() ; i++){
        ListNode* temp=lists[i];
        while(temp!=nullptr){
            res.push_back(temp->val);
            temp=temp->next;
        }
       }
       //step 2 : fir vector ko sort kardo 
       sort(res.begin(),res.end());

       //step 3 : vector ko linked list mei conevrt kardo
       if(res.empty()){
        return {};
       }
       ListNode*head=new ListNode(res[0]);
       ListNode*temp=head;
       for(int i=1 ; i<res.size() ; i++){
        ListNode* newNode=new ListNode(res[i]);
        temp->next=newNode;
        temp=temp->next;
       }

       return head;





    }
};