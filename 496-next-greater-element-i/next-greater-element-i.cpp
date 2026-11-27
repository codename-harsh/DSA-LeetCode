class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nextGreater;
        for (int r = 0; r < nums1.size(); r++) {
            int element = nums1[r];
            int MaxCheck = -1, MaxTrue = 0;

            for (int q = 0; q < nums2.size(); q++) {
                if (element == nums2[q]) {
                    MaxTrue = 1;
                } else if (MaxTrue == 1 && element < nums2[q]) {
                    MaxCheck = nums2[q];
                    break;
                }
            }
            nextGreater.push_back(MaxCheck);
        }
        return nextGreater;
    }
};