class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *f = head, *s = head;
        while(f != nullptr && f->next != nullptr) {
            s = s->next;
            f = f->next->next;
            if(f == s)  return true;
        }
        return 0;
    }
};