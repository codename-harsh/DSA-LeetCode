class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long, long long> m;
        long long gd = 0;
        for(int i = 0; i < nums.size(); i++) {
            long long x = nums[i] - i;
            gd += m[x];
            m[x]++;
        }
        long long total = (long long)(nums.size() * (nums.size() -1) >> 1);
        return total - gd;
    }

    // long long countBadPairs(vector<int>& nums) {
    //     long long c = 0;
    //     for(int i = 0; i < nums.size(); i++) {
    //         for(int j = i + 1; j < nums.size(); j++) {
    //             if(nums[i] - i != nums[j] - j)
    //                 c++;
    //         }//as expected brute force will give tle so now lesgo for optimisation and all i can think of is maps :)
    //     }
    //         return c;
    // }

    // long long countBadPairs(vector<int>& nums) {
    //     int c = 0, l = 0, r = nums.size() - 1;
    //     while(l < r) {
    //         if(r - l != nums[r] - nums[l]) {
    //             c++, l++, r--;
    //         } else if(r - l > nums[r] - nums[l])
    //             l++;
    //         else r--;
    //     }
    //     return c;      // ahh shit two pointer failed x_x idk why but
    //     //                i just thought it would work and one case passed where the output was 0 haha.... now lesgo with O(n^2) approach 
    // }
};