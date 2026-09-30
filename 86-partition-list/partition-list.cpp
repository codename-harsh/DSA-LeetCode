class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lh(0), rh(0);
        ListNode* lt = &lh, *rt = &rh;
        while (head) {
            if (head->val < x) {
                lt->next = head;
                lt = lt->next;
            } else {
                rt->next = head;
                rt = rt->next;
            }
            head = head->next;
        }
        lt->next = rh.next;
        rt->next = nullptr;
        return lh.next;
    }
};   