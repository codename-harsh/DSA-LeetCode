class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val) head = head->next;
        ListNode* t = head;
        while(t && t->next) {
            if(t->next->val == val) t->next = t->next->next;
            else t = t->next;
        }
        return head;
    }
};