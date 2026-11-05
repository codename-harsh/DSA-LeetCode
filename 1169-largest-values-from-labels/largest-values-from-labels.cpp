class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector<pair<int, int>> v;
        for(int i = 0; i < values.size(); ++i) {
            v.push_back({values[i], labels[i]});
        }
            sort(v.rbegin(), v.rend());
            unordered_map<int, int> mp;
            int ans = 0, c = 0;
            for(auto [val, lab] : v) {
                if(c == numWanted) break;
                if(mp[lab] < useLimit){
                    ans += val;
                    mp[lab]++;
                    c++;
                }
            }
        return ans;
    }
};