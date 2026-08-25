class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = nums.size() - 1; // j and k is left and right here 
            while(j < k) {
                int s = nums[i] + nums[j] + nums[k];
                if(s > 0){
                    k--;
                } else if(s < 0) {
                    j++;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++; k--;
            while(nums[j] == nums[j - 1] && j <k ){
                j++;
            }
        while(j < k && nums[k] == nums[k + 1]){
            k--;
        }
                }
            }

        }
        return ans;
    }
};