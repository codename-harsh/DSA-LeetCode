class Solution {
public:// harsh
    int largestInteger(vector<int>& nums, int k) {
            if(k == nums.size()){
                return *max_element(nums.begin(), nums.end());
            }
            
            if(k == 1) { // ye sab isliye kyuki mainly check krna jo 1 element hai multiple times to nahi hai warna matter ho jayega and 1 ka freq wala hi return krna hai ...
                int ans = -1;
                for (int i = 0; i < nums.size(); i++){
                    int c = 0;
                    for(int j = 0; j < nums.size(); j++) {
                        if(nums[i] == nums[j])
                            c++;
                    }
                    if(c == 1) // simply ye dekhna hai ki number ka freq 1 hai to wahi ans warna skip this shit and return -1
                        ans = max(ans, nums[i]); 
                }
                return ans;
            }   

            int ans = -1;
            int c = 0;
            for(auto x : nums) {
                if(x == nums.back())
                    c++;
            }
                    if(c == 1){
                        ans = max(ans, nums.back());
                    }
                    c = 0;
                    for(auto v : nums) {
                        if( v == nums[0]) {
                            c++;
                        }
                    }
                    if(c == 1)
                        ans = max(ans, nums[0]);
            
            return ans;
    }
};