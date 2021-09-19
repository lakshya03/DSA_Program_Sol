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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* start=head;
        for(int i=0;i<k;i++)
        {
            if(start==NULL)
               return start=head;
            start=start->next;
        }
        ListNode* curr=head;
        ListNode* next=NULL,*temp=NULL;
        for(int i=0;i<k;i++)
        {
           
                next=curr->next;
                curr->next=temp;
                temp=curr;
                curr=next;
            
        }
        head->next=reverseKGroup(curr,k);
        return temp;
        }
    
    
};