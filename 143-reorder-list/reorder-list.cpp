class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* t = head;
        while(t)    st.push(t), t = t->next;
        t = head; int n = st.size();
        for(int i = 0; i < n / 2; ++i) {
            ListNode* last = st.top();
            st.pop();
            last->next = t->next;
            t->next = last;
            t = last->next;
        }
        t->next = nullptr;
    }
};