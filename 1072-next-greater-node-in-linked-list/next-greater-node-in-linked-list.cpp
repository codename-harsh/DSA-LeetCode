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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> l;
        while(head) {
            l.push_back(head->val);
            head = head -> next;
        }
        stack<int> st;
        vector<int> ans(l.size()); // all initialised by 0
        for(int i = 0; i < l.size(); ++i) {
            while(!st.empty() && l[i] > l[st.top()]){
                int k = st.top();
                st.pop();
                ans[k] = l[i];
            }
        st.push(i);
        }
        return ans;
    }
};