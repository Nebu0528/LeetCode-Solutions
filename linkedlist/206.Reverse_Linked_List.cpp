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
        //set the current and previous nodes
        ListNode *curr = head;
        ListNode* prev = nullptr;

        while (curr){
            //set a reference to the next node
            ListNode *temp = curr->next;
            //reverse the next node by setting it to the previous
            curr->next = prev;
            //move the previous pointer to curr
            prev = curr;
            //set the current pointer to be the temp pointer
            curr = temp;

        }
        return prev;
    }
};