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
private:
    int findlen(ListNode*& head) {
        int l = 0;
        ListNode* t =head;
        while(t != NULL) {
            l++;
            t = t->next;
        }
        return l;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = findlen(head);
        if(n == l) {
            ListNode*t = head;
            head = head->next;
            delete t;
            return head;
        }
        int x = l - n -1;
        ListNode* t = head;
        for(int i = 0; i < x; i++) {
            t = t->next;
        }
        ListNode* d = t->next;
        t->next = d->next;
        delete d;
        return head;
    }
};