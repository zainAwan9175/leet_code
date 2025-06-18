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
        ListNode* temp=head;
        int count=0;

        while(temp!=NULL)
        {
           count++;
           temp=temp->next;

        }
        temp=head;
        int pos=count-n;
          if (pos == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

count=0;
           while(temp!=NULL)
        {
           count++;
         if(count==pos)
         {
             ListNode* nodeToDelete = temp->next;
            temp->next=temp->next->next;
       return head;
         }else{
            temp=temp->next;
         }

        }
        return head;
    }
};