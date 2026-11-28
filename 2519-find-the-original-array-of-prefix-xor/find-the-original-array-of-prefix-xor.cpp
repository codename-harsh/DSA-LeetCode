class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        for(int i = (pref.size() - 1); i > 0; --i) pref[i] = pref[i] xor pref[i - 1];
        return pref; cout.tie(nullptr), cin.tie(nullptr);
    }
};