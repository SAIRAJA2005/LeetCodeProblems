// Last updated: 01/09/2025, 01:05:08
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* currentNode = dummy;
        while(currentNode -> next != NULL){
            if(currentNode -> next -> val == val){
                ListNode* temp = currentNode -> next;
                currentNode -> next = currentNode -> next -> next;
                delete temp;
            }
            else{
                currentNode = currentNode -> next;
            }
        }
        ListNode* newHead = dummy -> next;
        delete dummy;
        return newHead;
    }
};