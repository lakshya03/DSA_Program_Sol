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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr=head,*ptr2=head,*kt=NULL;
        while(--k)
        {
            ptr=ptr->next;
        }
        kt=ptr;
        ptr=ptr->next;
        while(ptr)
        {
            ptr=ptr->next;
            ptr2=ptr2->next;
        }
        swap(ptr2->val,kt->val);
        return head;
    }
};
