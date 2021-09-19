/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
         Node* start=root;
        Node* prevNode=NULL,*head=NULL;
        while(root)
        {
            
          if(root->left)
          {
             if(prevNode)
                prevNode= prevNode->next=root->left;
                 else{
                     prevNode=root->left;
                     head=prevNode;
                 }
          }
            if(root->right)
            {
                if(prevNode)
                prevNode= prevNode->next=root->right;
                 else{
                     prevNode=root->right;
                     head=prevNode;
                 }
            }
            root=root->next;
            if(!root)
            {
                root=head;
                head=prevNode=NULL;
            }
        }
        return start;
    }
};