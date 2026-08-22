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

       /*vector<int>res;
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
       if(res.empty()){  //base case is mandatory
        return {};
       }
       ListNode*head=new ListNode(res[0]);
       ListNode*temp=head;
       for(int i=1 ; i<res.size() ; i++){
        ListNode* newNode=new ListNode(res[i]);
        temp->next=newNode;
        temp=temp->next;
       }

       return head;*/

    //optimal approach of w3hat I can think of is ki we can use a min heap so that sorting time complexity will be reduced 

    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0 ; i<lists.size() ; i++){
        ListNode* temp=lists[i];
        while(temp!=nullptr){
            pq.push(temp->val);
            temp=temp->next;
        }
    }

    if(pq.empty()){   //base case is mandatory
        return nullptr;
    }
    ListNode*head=new ListNode(pq.top()); //we cannot use pq.front() in a priority_queue we need to use pq.top only to refer to the top most element coz it is like a treee not actually a queue
    pq.pop();
    ListNode*temp=head;
    while(!pq.empty()){
        ListNode*newNode=new ListNode(pq.top());
        pq.pop();
        temp->next=newNode;
        temp=temp->next;
    }


    return head;




    }
};