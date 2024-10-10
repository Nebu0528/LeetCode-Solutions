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
        //starting at head
        //the previous is nullptr
        //the current node is the head
        ListNode *prev = nullptr;
        ListNode *curr = head;

        //while we are at the current node
        while (curr){
            //create a temporary next node
            ListNode *temp_next = curr->next;
            //set the previous node as curr->next
            curr->next = prev;
            //set previous to be the current
            prev = curr;
            //set the current to be the next node
            curr = temp_next;
        }
        //return the previous node
        return prev;
    }
};