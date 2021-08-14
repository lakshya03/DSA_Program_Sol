int getMiddle(Node *root)
{
   // Your code here
  Node* start=root;
  Node* end=root;
  while(end!=NULL && end->next!=NULL)
  {
      end=end->next->next;
      start=start->next;
  }
return start->data;
}
