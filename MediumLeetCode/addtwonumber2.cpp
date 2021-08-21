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
    ListNode* reverse(ListNode* l1)
    {
        ListNode* n=NULL, *t=NULL;
        while(l1!=NULL)
        {
            n=l1->next;
            l1->next=t;
            t=l1;
            l1=n;
        }
        return t;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      l1=  reverse(l1);
      l2=  reverse(l2);
        int c = 0;
    ListNode newHead(0);
    ListNode *t = &newHead;
    while(c || l1 || l2) {
        c += (l1? l1->val : 0) + (l2? l2->val : 0);
        t->next = new ListNode(c%10);
        t = t->next;
        c /= 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return reverse(newHead.next);
    }
};