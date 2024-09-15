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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int itrate=count-n;
           temp=head;
        for(int i=0;i<itrate-1;i++)
        {
           temp=temp->next;
        }
        if(itrate==0&&temp->next==NULL)
        {
            return NULL;
        }
          if(itrate==0&&temp->next!=NULL)
        {
            head=head->next;
        }
        temp->next=temp->next->next;
    return head;

     }
};