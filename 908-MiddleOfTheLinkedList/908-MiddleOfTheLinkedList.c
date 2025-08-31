// Last updated: 01/09/2025, 01:03:09
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *temp=head;
    int count=0;
    while(temp)
    {
        count++;
        temp=temp->next;
    }
    int middle=count/2;
    count=0;
    temp=head;
    while(temp)
    {
        if(count==middle)
        {
            break;
        }
        temp=temp->next;
        count++; 
    }
    return temp;
}