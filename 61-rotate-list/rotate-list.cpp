class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    ListNode* temp =head;
    if (!head || !head->next || k == 0) return head; 
   int count=0;
    while(temp!=NULL)
    {
      count++;
      temp=temp->next;
    }
    if(k%count==0 )
    {
        return head;
    }
     k = count - (k % count);
      
  temp=head;
      for(int i=1;i<k;i++)
      {
        temp=temp->next;
      }
     ListNode* newhead=temp->next;
     temp->next=NULL;
       ListNode* newheadtemp=newhead;

     while(newheadtemp->next!=NULL)
     {
        newheadtemp=newheadtemp->next;
     }
     newheadtemp->next=head;
     head=newhead;

      

  
        // for(int i=0;i<k;i++)
        // {
        //    temp =head;
        //     while(temp->next && temp->next->next != NULL)
        //     {
        //         temp=temp->next;
        //     }
        //    temp->next->next=head;
        //    head=temp->next;
        //    temp->next=NULL;

        // }

       
       return head;
        
    }
};