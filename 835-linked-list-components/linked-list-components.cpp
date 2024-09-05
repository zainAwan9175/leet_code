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
        for (int num : nums) {
            numMap[num] = true;
        }

        int componentCount = 0;
        bool inComponent = false;
        
        // Step 2: Traverse the linked list
        while (head != nullptr) {
            // Step 3: If the current value is in the numMap
            if (numMap.find(head->val) != numMap.end()) {
                // If we are not already in a component, we start a new one
                if (!inComponent) {
                    componentCount++;
                    inComponent = true;
                }
            } else {
                // If the current value is not in the map, we are not in a component
                inComponent = false;
            }
            head = head->next;
        }

        return componentCount;
    }
};
