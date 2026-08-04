class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Brute Force
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> f;
        for(int i = 0; i < nums.size(); i++) {
            int c = 1;
            while(i + c < nums.size() && nums[i] == nums[i + c])
                c++;
            f.push_back({c, nums[i]});
            i += c - 1;
        }
        sort(f.rbegin(), f.rend());
        vector<int>ans;
        for(int i= 0; i <k; i++) {
            ans.push_back(f[i].second); 
        }
        return ans;
    }
};