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
    int getDecimalValue(ListNode* head) {
        int count =0;
        ListNode* start=head;
        while(start!=NULL)
        {
            start=start->next;
            count++;
        }
        int sum=0;
        while(head!=NULL)
        {
             sum=head->val*pow(2,--count)+sum;
            head=head->next;
        }
        return sum;
    }
};