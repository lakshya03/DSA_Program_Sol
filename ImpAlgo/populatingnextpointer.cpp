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
        while(root->left)
        {
            Node* newRoot=root;
            while(newRoot){
            newRoot->left->next=newRoot->right;
            if(newRoot->next)
            {
                newRoot->right->next=newRoot->next->left;
                
            }
                newRoot=newRoot->next;
            }
            root=root->left;
        
            
        }
        return start;
    }
};