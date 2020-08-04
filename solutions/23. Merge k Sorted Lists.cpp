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
    ListNode* mergetwolist(ListNode* l1,ListNode* l2)
    {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode* start=NULL;
        if(l1->val <= l2->val)
        {
            start=l1;
            start->next=mergetwolist(l1->next,l2);
        }
        else
        {
            start=l2;
            start->next=mergetwolist(l1,l2->next);
        }
        return start;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
             return NULL;
        int len=lists.size()-1;
        while(len!=0)
        {
            int i=0,j=len; 
            while(i<j)
            {
                lists[i]=mergetwolist(lists[i],lists[j]);
                i++;
                j--;
                if(i>=j)
                    len=j;
            }    
        }
        return lists[0];
    }
};
