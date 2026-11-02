class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)   return false;
        stack<int> st;
        int maxi = INT_MIN;
        for(int i = n - 1; i >= 0; --i) {
            int x = nums[i];
            if(x < maxi)    return true;
            while(!st.empty() && st.top() < x) {
                maxi = st.top();
                st.pop();
            }
            st.push(x);
        }
        return 0;
    }
};