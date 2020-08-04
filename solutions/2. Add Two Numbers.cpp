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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        if(!l1 && !l2)
            return NULL;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode* curr=new ListNode(0);
        ListNode* root=curr;
        int carry=0;
        while(ptr1!=NULL && ptr2!=NULL)
        {
            int sum =(ptr1->val + ptr2->val + carry);
            curr->next = new ListNode(sum%10);
            curr=curr->next;
            carry = sum/10;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr1!=NULL)
        {
            int sum =(ptr1->val + carry);
            curr->next = new ListNode(sum%10);
            curr=curr->next;
            carry = sum/10;
            ptr1=ptr1->next;
        }
         while(ptr2!=NULL)
        {
            int sum =(ptr2->val + carry);
            curr->next = new ListNode(sum%10);
             curr=curr->next;
            carry = sum/10;
            ptr2=ptr2->next;
        }
        if(carry==1)
            curr->next=new ListNode(carry);
        return root->next;
    }
};
