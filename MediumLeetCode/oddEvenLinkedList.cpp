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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode* oddhead=head,*evenhead=head->next,*oddtail=head,*eventail=head->next;
        while(eventail!=NULL && eventail->next!=NULL)
        {
            oddtail->next=oddtail->next->next;
            eventail->next=eventail->next->next;
            oddtail=oddtail->next;
            eventail=eventail->next;
        }
        oddtail->next=evenhead;
        return oddhead;
    }
};