class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int n = costs.size(), ans = 0;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; ++i)
            v.push_back({costs[i], capacity[i]});
        sort(v.begin(), v.end());
        vector<int> pre(n);
        for(int i = 0; i < n; ++i) {
            pre[i] = max(i ? pre[i-1] : 0, v[i].second);
            if(v[i].first < budget)
                ans = max(ans, v[i].second);
        }
        for(int i = 0; i < n; ++i) {
            int j = upper_bound(v.begin(), v.end(),
                make_pair(budget - v[i].first - 1, INT_MAX)) - v.begin();
            j = min(j, i);
            if(j > 0)
                ans = max(ans, v[i].second + pre[j-1]);
        }
        return ans;
    }
};