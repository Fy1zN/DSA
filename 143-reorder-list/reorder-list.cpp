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
    void reorderList(ListNode* head) {

          // 1. Find the middle
           ListNode* slow = head;
           ListNode* fast = head;

         while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
             }
             // 2. Reverse the second half
             ListNode* second = slow->next;
             slow->next = nullptr;

             ListNode* prev = nullptr;
             while(second){
                ListNode* next = second->next;
                second->next = prev;
                prev = second;
                second = next;
             }
             second = prev;
             
                // 3. Merge the two halves

                ListNode* first = head;
                while(second){
                    ListNode* temp1 = first->next;
                    ListNode* temp2 = second->next;

                    first->next = second;
                    second->next = temp1;
                    first = temp1;
                    second = temp2;
                }
             
    }
};