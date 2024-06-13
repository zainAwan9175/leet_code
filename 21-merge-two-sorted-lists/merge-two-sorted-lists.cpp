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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode();
            ListNode* head=temp;
              ListNode*  empt=NULL;

        vector<int> vect;
        while(list1)
        {
            vect.push_back(list1->val);
            list1=list1->next;
        }
         while(list2)
        {
            vect.push_back(list2->val);
            list2=list2->next;
        }
        if(vect.size()==0)
        {
            return empt;
        }
        sort(vect.begin(),vect.end());
        for(int i=0;i<vect.size();i++)
        {
            temp->val=vect[i];
            if(i<vect.size()-1)
            {
                   ListNode* newnode=new ListNode(0);
            temp->next=newnode;
            temp=temp->next;

            }
          

        }
       return head;
    }
};