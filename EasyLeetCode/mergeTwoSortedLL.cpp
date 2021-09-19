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
    ListNode* mergeTwoLists(ListNode* p, ListNode* q) {
        
        if(!p)
            return q;
            else if(!q)
                return p;
        else if(p->val <q->val)
        {  p->next=mergeTwoLists(p->next,q);
         return p;
         }
        else
        {
            q->next=mergeTwoLists(p,q->next);
         return q;
        }
    }
};