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
    ListNode* oddEvenList(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return head;

        ListNode* left = head;
        ListNode* right = head->next;
        ListNode* temp = right;

        while(right != nullptr && right->next != nullptr){

            left->next = right->next;
            left = left->next;

            right->next = left->next;
            right = right->next;
        }

        left->next = temp;

        return head;
    }
};