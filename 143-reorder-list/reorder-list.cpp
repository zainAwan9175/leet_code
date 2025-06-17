class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // Step 1: Find the middle using slow & fast pointers
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {  // ✅ Correct condition
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* cur = slow->next;
        slow->next = NULL;
        ListNode* pre = NULL;
        ListNode* next = NULL;

        while (cur) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;  // ✅ Correct update
        }

        // Step 3: Merge the two halves
        ListNode* first = head;
        ListNode* second = pre;

        while (second) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
