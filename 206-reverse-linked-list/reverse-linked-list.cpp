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
    ListNode* reverseList(ListNode* head) {
    // ListNode* temp=head;
    // ListNode* pre=NULL;
    // ListNode* cur=NULL;
    // while(temp!=NULL)
    // {
    //    cur=temp->next;
    //    temp->next=pre;
    //    pre=temp;
    //    temp=cur;

    // }
    // head=pre;

    // return head;
ListNode* temp=head;
stack<ListNode*> st;
while(temp!=NULL)
{
   st.push(temp);
   temp=temp->next;
}

if (!st.empty()) {
    head = st.top();
    st.pop();
}
else{
    return NULL;
}
ListNode* ntemp=head;

while(!st.empty())
{
    ntemp->next=st.top();
    ntemp=ntemp->next;

    st.pop();

}
ntemp->next=NULL;
    return head;
       
    } 
};