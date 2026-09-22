class Solution {
private:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if(!l1) return l2; if(!l2) return l1;
        if(l1->val < l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    ListNode* solver(vector<ListNode*>&lists, int l, int r) {
        if(l == r)  return lists[r];
        int mid = l + (r - l) / 2;;
        ListNode* l1 = solver(lists, l, mid), *l2 = solver(lists, mid+1, r);
        return merge(l1, l2);
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())   return 0;
        return solver(lists, 0, lists.size() - 1);
    }
};