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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> m;
        ListNode* ptr=head;int prep=0;
        ListNode *dummy=new ListNode (0,head);
        m[0]=dummy;
        while(ptr!=NULL)
        {prep=prep+ptr->val;
            if(m.find(prep)!=m.end())
            { auto it=m[prep]->next;
             int SUM=prep;
             while(it!=ptr)
             {SUM+=it->val;
                 m.erase(SUM);
              it=it->next;
             }
                m[prep]->next=ptr->next;    
            }
            else
              m[prep]=ptr;
            ptr=ptr->next;   
        }
        return dummy->next; 
    }
};
