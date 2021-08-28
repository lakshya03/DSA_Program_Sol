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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head,*fast=head,*res=NULL;
    while(fast && fast->next)
    {
        slow= slow->next;
        fast= fast->next->next;
        if(slow== fast)   
        {
            fast= head; 
            while(fast!=slow) 
            {
                slow= slow->next;
                fast= fast->next;
            }
            res= slow;
            break;
        }
    }
    return res;
    }
};