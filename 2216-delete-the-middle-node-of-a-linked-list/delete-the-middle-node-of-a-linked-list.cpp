class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head -> next)   return nullptr;
        ListNode* f = head, *s = head, *prev = nullptr;
        while(f && f->next) {
            prev = s;
            s = s->next;
            f = f->next->next;
        }
        prev->next = s->next;
        delete s;
        return head;
    }
};