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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* temp1=head;

        while(temp)
        {
            vector<int> vec;
            for(int i=0;i<k;i++)
            {
                if(temp!=NULL)
                {
                     vec.push_back(temp->val);
                      temp=temp->next;
                }else
                 return head;

            }
            reverse(vec.begin(),vec.end());
            for(auto it:vec)
            {
                if(temp1!=NULL)
                {
                        temp1->val=it;
                }
                temp1=temp1->next;
               
            }
        }
        return head;
    }
};