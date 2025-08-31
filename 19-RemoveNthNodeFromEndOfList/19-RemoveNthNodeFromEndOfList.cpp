// Last updated: 01/09/2025, 01:06:50
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
        ListNode *temp = head;
        int c = 0;
        while(temp != NULL){
            c++;
            temp = temp->next;
        }
        if(c == n){
            ListNode *dn = head;
            head = head->next;
            delete dn;
            return head;
        }
        int i = c - n;
        temp = head;
        while(i-1 != 0){
            i--;
            temp = temp->next;
        }
        ListNode *dn = temp->next;
        temp->next = dn->next;
        delete dn;
        return head;
    }
};