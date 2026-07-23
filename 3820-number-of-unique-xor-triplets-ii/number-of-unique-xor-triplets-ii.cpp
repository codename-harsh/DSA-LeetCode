class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if (nums.size() < 3) {
    unordered_set<int> st(nums.begin(), nums.end());
    return st.size();
}
        unordered_set<int> c, q, w;

        int  n = nums.size();
        for(int i = 0; i < n ; i++) {
            // checkin dups
            if(q.contains(nums[i])) continue;
            q.insert(nums[i]);

            for(int j = i ; j < n; j++) {
                // checking 2nd dups 
                 int val=nums[i] xor nums[j];
                if(w.contains(val)) continue;
                w.insert(val);
                for(int k = j ; k < n ; k++) {
                    c.insert(nums[i] xor nums[j] xor nums[k]);
                }
            }
        }
        return c.size();
    }
};

