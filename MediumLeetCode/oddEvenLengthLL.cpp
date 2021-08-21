String findLength(Node head) 

   { 

       Node fast_ptr = head; 

       if (head != null) 

       { 

           while (fast_ptr != null && fast_ptr.next != null) 

           { 

               fast_ptr = fast_ptr.next.next; 

           } 

 

          if(fast_ptr==null) 

               return "even"; 

 

          if(fast_ptr.next == null) 

              return "odd"; 

 

       } 

   } 