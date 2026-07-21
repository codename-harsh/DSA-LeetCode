class Solution {
public:
     int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //now we will remove the consecutive duplicates after sorting
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        // edge cases checkin
        if(nums.size() < 3){
            return nums.back();
        }
        nums.pop_back(); nums.pop_back();
        return nums.back();
    }
};