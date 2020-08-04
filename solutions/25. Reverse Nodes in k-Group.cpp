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
     
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* nexthead=head;
        int count=0;
        while(nexthead!=NULL && count!=k)
        {
            nexthead=nexthead->next;
            count++;
            
        }
        if(count!=k)
            return head;
        ListNode* remhead=reverseKGroup(nexthead,k);
        ListNode* next=NULL;
        while(count--)
        {
            next=head->next;
            head->next=remhead;
            remhead=head;
            head=next;
        }
        return remhead;
    }
};
