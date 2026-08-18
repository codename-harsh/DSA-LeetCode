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
    ListNode* mergeTwoLists(ListNode* l, ListNode* r) {
        if (l == 0)
            return r;
        if (r == 0)
            return l;
        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;
        while (l && r) {
            if (l->val <= r->val) {
                mptr->next = l;
                mptr = l;
                l = l->next;
            } else {
                mptr->next = r;
                mptr = r;
                r = r->next;
            }
        }
        while (l) {
            mptr->next = l;
            mptr = l;
            l = l->next;
        }
        while (r) {
            mptr->next = r;
            mptr = r;
            r = r->next;
        }
        return ans -> next;
    }
};