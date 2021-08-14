int getNthFromLast(Node *root, int k)
{
       // Your code here
       if(root==NULL)
       return -1;
       Node* start=root;
  Node* prev=root;
  while(start!=NULL && k-->0)
  {
    start=start->next;
   
  }
  if(start==NULL )
  {
    if(k==0 )
    {
        root=root->next;
        return prev->data;
    }
    //     return prev->data;
    return -1;
  }
  while(start!=NULL)
  {
    prev=prev->next;
    start=start->next;
  }
  return prev->data;
}
