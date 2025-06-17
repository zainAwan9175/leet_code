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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         stack<int>st;
//         ListNode* temp=head;
//         while(temp!=NULL)
//         {
//             st.push(temp->val);
//                     temp=temp->next;
//         }
//         temp=head;
//          while(temp!=NULL)
//         {
//         temp->val=st.top();
//         st.pop();
//         temp=temp->next;
//         }
// return head;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode* cur=head;
     ListNode* pre=NULL;
     ListNode* next=NULL;
     while(cur!=NULL)
     {
        next=cur->next;
        cur->next=pre;
        pre=cur;
        cur=next;


     }
     return pre;
    }
};