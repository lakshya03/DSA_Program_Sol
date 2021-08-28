ListNode* remoceCycle(ListNode* root)
{
  ListNode* slow=root, *fast=root;
  while(fast && fast->next)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
      slow=root;
      if(slow==fast)
      {
        while(fast->next != slow) fast = fast->next;
      }
      else{
      while(fast->next!=slow->next) 
            {
                slow= slow->next;
        prev=fast;
                fast= fast->next;
            }
      }
      fast->next=NULL;
    }
    return root;
    }
}
Q22 even/od