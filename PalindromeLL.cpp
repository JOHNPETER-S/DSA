class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; // Empty or single node list is always palindrome

        // Step 1: Find the middle node (slow will point to the middle)
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Step 3: Compare both halves
        ListNode* left = head;  // First half starts from head
        ListNode* right = prev; // Second half starts from prev (reversed part)
        while (right) { // Compare only till right half (as it can be shorter)
            if (left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }

        return true; // If all elements matched, it's a palindrome
    }
};
