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
    bool isPalindrome(ListNode* head) {
        vector<int> vec1;
            vector<int> vec2;

        while(head!=NULL)
        {
            vec1.push_back(head->val);
               vec2.push_back(head->val);
               head=head->next;
        }
        reverse(vec1.begin(),vec1.end());
        return vec1==vec2;
    }
};