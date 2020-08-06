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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            len++;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        k = k%len;
        if(k==0)
            return head;
        k =len -k;
        while(k--)
        {
            prev=curr;
            curr=curr->next;     
        }
        if(prev!=NULL)
           prev->next=NULL;
        temp->next=head;
        head=curr;
        return head;
    }
};
