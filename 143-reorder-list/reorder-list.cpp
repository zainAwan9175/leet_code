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
        queue<int> qu;
        stack<int> st;
        ListNode* temp=head;
        while(temp!=NULL)
        {
        qu.push(temp->val);
        st.push(temp->val);
        temp = temp->next;
        }
        temp=head;
      
         while(temp!=NULL)
         {
            temp->val=qu.front();
            qu.pop();
            if(temp->next!=NULL)
            {
                temp=temp->next;
                temp->val=st.top();
                st.pop();
            }

            temp=temp->next;
         }
        
    }
};