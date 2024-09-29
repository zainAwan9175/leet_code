/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode*> st;
        while(head!=NULL)
        {
             int cnt = count(st.begin(), st.end(), head);

            if(cnt>0)
            {
               int cunt=0;
              for(auto it:st)
              {
                cunt++;
                if(it==head)
                {
                    return head;
                }
              }
            }
            st.push_back(head);
            head=head->next;
        }

        return NULL;
    }
};