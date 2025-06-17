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
        vector<ListNode *> visited;
        ListNode *temp=head;


        while(temp!=NULL)
        {
            for(auto it:visited)
            {
                if(it==temp)
                {
                    return true;
                }
            }
            visited.push_back(temp);
            temp=temp->next;

        }

        return false;
    }
};