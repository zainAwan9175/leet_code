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
    ListNode* deleteDuplicates(ListNode* head) {
        
       set<int> st;
       while(head)
       {
        st.insert(head->val);
        head=head->next;
       }
       if(st.size()==0)
        {
            return NULL;
        }
       ListNode* had=new ListNode(0);
       ListNode* temp=had;
int i=0;
for(auto c:st)
{
   

     temp->val=c;
     if (i==st.size()-1)
     {
        break;
     }
        ListNode* newnode=new ListNode(0);


         temp->next=newnode;
         temp=newnode;
 i++;
}

    //    for(int i=0;i<st.size();i++)
    //    {
    //      temp->val=st[i];
    //           ListNode* newnode=new ListNode(0);


    //      temp->next=newnode;
    //      temp=newnode;
         
    //    }
       return had;
       
    }
};