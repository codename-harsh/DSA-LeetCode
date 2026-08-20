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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* t = head;
        int c = 0;
        while (t != nullptr && c < k) {
            t = t->next;
            c++;
        }
        if (c < k)
            return head;

        ListNode *prev = nullptr, *curr = head, *fwd = nullptr;
        c = 0;
        while (c < k) {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            c++;
        }
        head->next = reverseKGroup(fwd, k);
        return prev;
    }
};