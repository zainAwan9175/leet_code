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
    void reorderList(ListNode* head) {
        // first find mid
        if (!head || !head->next) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* cur=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;

        }
          ListNode* list1=head;
            ListNode* list2=prev;
            while( list2)
            {
                  ListNode* first=list1->next;
                    ListNode* second=list2->next;

                    list1->next=list2;
                    list2->next=first;
                    list1=first;
                    list2=second;


            }

        
    }
};