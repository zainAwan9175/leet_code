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
       ListNode* temp=head;
       stack<int> st;
       queue<int> qu;
int count =0;
        while(temp)
        {
            count++;
             temp=temp->next;
        }
        int firsthalf=ceil(count/2.0);
        int secondhalf=count-firsthalf;
   
        temp=head;
    for(int i=0;i<firsthalf;i++)
    {
        qu.push(temp->val);
        temp=temp->next;
    }
      for(int i=0;i<secondhalf;i++)
    {
        st.push(temp->val);
        temp=temp->next;
    }
      temp=head;
      while(temp)
      {
            temp->val=qu.front();
            qu.pop();
            temp=temp->next;
        if(temp!=NULL)
        {
           temp->val=st.top();
           st.pop();
           temp=temp->next;
        }
      }


      
        
    }
};