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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3= new ListNode(0);
        ListNode* temp=list3;
        while(list1&&list2)
        {
            if(list1->val<=list2->val)
            {
                temp->next=list1;
                temp=temp->next;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                temp=temp->next;
                list2=list2->next;

            }
     
        }
        if(list1==NULL)
        {
            temp->next=list2;
        }
        if(list2==NULL)
        {
            temp->next=list1;
        }
        return list3->next;
    }
};