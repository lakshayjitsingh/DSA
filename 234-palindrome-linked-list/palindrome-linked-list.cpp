class Solution {
public:

    ListNode* reverse(ListNode* head) {

        ListNode* prev = nullptr;

        while (head) {

            ListNode* next = head->next;

            head->next = prev;

            prev = head;

            head = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return true;

        ListNode *slow = head, *fast = head;

        // Step 1: Find the middle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half
        ListNode* second = reverse(slow);

        // Step 3: Compare both halves
        ListNode* first = head;

        while (second) {

            if (first->val != second->val)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};