// Last updated: 01/09/2025, 01:05:35
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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL) return 0;
        unordered_set<ListNode*>unMap;
        while(head != NULL){
            if(unMap.find(head) != unMap.end()){
                return 1;
            }
            unMap.insert(head);
            head = head -> next;
        }
        return 0;
    }
};