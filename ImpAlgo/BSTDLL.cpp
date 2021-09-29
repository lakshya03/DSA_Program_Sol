Node* prv=NULL,*head=NULL;
void BSTDLL(Node* root){
BSTDDL(root->left);
if(prev==NULL)
{
    head=root;
}
else{
    prev->right=root;
    root->left=prev;
    prev=root;
}
BSTDLL(root->right);
}