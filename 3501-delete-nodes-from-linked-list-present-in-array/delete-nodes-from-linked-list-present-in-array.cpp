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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> hash;
        for(auto i : nums){
            hash[i]++;
        }
        ListNode* temp = head;
        ListNode* prev = new ListNode(0);
        prev -> next = head;
        head = prev;

        while(temp){
            if(hash.find(temp -> val) != hash.end()){
                prev -> next = temp -> next;
                temp = prev -> next;
            }
            else{
                prev = temp;
                temp = temp -> next;
            }
        }
        return head -> next;
    }
};