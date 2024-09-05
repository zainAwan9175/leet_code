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
    int numComponents(ListNode* head, vector<int>& nums) {
        // Step 1: Store the elements of nums in an unordered_map for O(1) lookups
        unordered_map<int, bool> numMap;
        ListNode* temp = head;
        for (int num : nums) {
            numMap[num] = true;
        }

        int componentCount = 0;
        while (temp != NULL) {
            if (numMap[temp->val]) {
                componentCount++;
                while (temp != NULL && temp->next != NULL && numMap[temp->next->val]) {
                    temp = temp->next;
                }
            }
            temp = temp->next;
        }

        return componentCount;
    }
};
