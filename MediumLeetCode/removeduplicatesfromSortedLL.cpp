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
    ListNode* deleteDuplicates(ListNode* head) {
       if (!head) return 0;
        if (!head->next) return head;
        
        int sameVal=head->val;
        ListNode* p = head->next;
        if(p->val!=sameVal)
        {
            head->next= deleteDuplicates(p);
            return head;
        }
        else
        {
            while(p  && p->val==sameVal)
                p=p->next;
            return deleteDuplicates(p);
        }
    }
};