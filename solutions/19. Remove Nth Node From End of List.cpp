/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count < n)
            return head;
        else if(count == n)
            return head->next;
​
        temp=head;
        count -= n;
        ListNode* prev=NULL;
        while(count--)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next=NULL;
        return head;
    }
};
