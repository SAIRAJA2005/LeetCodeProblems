// Last updated: 01/09/2025, 00:59:56
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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode* start = head;
        while(start != NULL){
            ListNode* temp = start;
            int sm = 0;
            while(temp->val != 0){
                sm += temp->val;
                temp = temp->next;
            }
            start->val = sm;
            start->next = temp->next;
            start = start -> next;
        }
        return head;
    }
};