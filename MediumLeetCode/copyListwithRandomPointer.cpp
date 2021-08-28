/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* start=head;
        if (head == nullptr)
            return nullptr;
        while(start!=NULL)
        {
            Node* copyNode=new Node(start->val,start->next,nullptr);
            start->next=copyNode;
            start=copyNode->next;
        }
        start=head;
        while(start!=NULL)
        {
            if(start->random)
            start->next->random=start->random->next;
            start=start->next->next;
        }
         
        start = head;
         Node *evenHead = head->next;
        Node* even=nullptr;
        while (start != nullptr)
        {
            even = start->next;
            start->next = even->next;
            start = start->next;
            if (start)
                even->next = start->next;
        }
        return evenHead;

        
    }
};