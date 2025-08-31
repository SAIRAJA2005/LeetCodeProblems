// Last updated: 01/09/2025, 01:05:28
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* , bool>mp;
        while(headA != NULL){
            mp[headA] = true;
            headA = headA -> next;
        }

        ListNode* temp = headB;
        while(temp != NULL){
            if(mp[temp]) return temp;
            temp = temp -> next;
        }
        return NULL;
    }
};