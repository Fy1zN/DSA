class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);  // Create dummy node
        dummy->next = head;                 // Connect dummy to head

        ListNode* fast = dummy;             // Fast pointer
        ListNode* slow = dummy;             // Slow pointer

        for (int i = 0; i <= n; i++) {      // Move fast n+1 steps
            fast = fast->next;              // Advance fast pointer
        }

        while (fast != nullptr) {           // Continue until fast reaches end
            fast = fast->next;              // Move fast one step
            slow = slow->next;              // Move slow one step
        }

        ListNode* temp = slow->next;        // Store node to be deleted
        slow->next = slow->next->next;      // Skip the target node
        delete temp;                        // Free deleted node memory

        ListNode* newHead = dummy->next;    // Save updated head
        delete dummy;                       // Free dummy node
        return newHead;                     // Return updated list
    }
};