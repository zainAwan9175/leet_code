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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
    ListNode* pre=NULL;
    ListNode* cur=NULL;
    while(temp!=NULL)
    {
       cur=temp->next;
       temp->next=pre;
       pre=temp;
       temp=cur;

    }
    head=pre;
int p=0;
int ans=0;
    while(head!=NULL)
    {
        ans=ans+pow(2,p)*head->val;
        p++;
        head=head->next; 
    }
        return ans;
    }
};