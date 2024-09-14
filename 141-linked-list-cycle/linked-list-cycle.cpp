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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return false;
        }
      set<ListNode*> st;
         st.insert(head);
        head=head->next;
      while(head!=NULL)
      {
      if(st.count(head))
      {
        return true;
        }
       st.insert(head);
        head=head->next;
      }
        return false;
    }
};