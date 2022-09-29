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
         if (!head) {
            return;
        }

        ListNode *slow = head, *fast = head, *curr = head, *prev = NULL;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        stack<ListNode*> backup;

        while (slow) {
            backup.push(slow);
            slow = slow->next;
        }

        //now we need to make whole list

        while (!backup.empty()) {
            ListNode *top = backup.top();
            backup.pop();
            // this case would occur only for odd number of elements 
            if (curr == top) {
                break;
            }
            prev = curr->next;
            curr->next = top;
            top->next = prev;
            curr = prev;
        }
        curr->next = NULL;
    }
};