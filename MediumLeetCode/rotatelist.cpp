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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL)
           return head;
        ListNode * start=head;
        int size=1;
        while(head->next)
        {
            head=head->next;
            size++;
        }
        head->next=start;
        k=k%size;
        k=size-k;
        while(--k>0)
        {
            start=start->next;
            
            
        }
        head = start;
        start=start->next;
        head->next=NULL;
        return start;
    }
};