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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //brute approach : dono list ke data ko vector mei daal denge fir sort karke as a list print karwa denge 

        priority_queue<int,vector<int>,greater<int>>pq;
            ListNode* temp1=list1;
            ListNode* temp2=list2;
            while(temp1 != nullptr) {
    pq.push(temp1->val);
    temp1 = temp1->next;
}

while(temp2 != nullptr) {
    pq.push(temp2->val);
    temp2 = temp2->next;
}
            
            ListNode* dummy = new ListNode(-1);
            ListNode* temp = dummy;
            while(!pq.empty()){
                int value = pq.top();
                pq.pop();

                ListNode*newNode = new ListNode(value);
                temp->next=newNode;
                temp=temp->next;
            }

            return dummy->next;
    }
};