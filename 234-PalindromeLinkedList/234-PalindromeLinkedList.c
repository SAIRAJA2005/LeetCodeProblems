// Last updated: 01/09/2025, 01:04:54
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
    int arr[100000],k=0;
    struct ListNode *temp=head;
    while(temp)
    {
        arr[k++]=temp->val;
        temp=temp->next;
    }
    temp=head;
    for (int i=k-1;i>=0;i--)
    {
        if(arr[i]!=temp->val)
        {
            return false;
        }
        temp=temp->next;
    }
    return true;
}