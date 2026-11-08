class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans = 0,  max = arr[0];
        for (int i = 0; i < arr.size(); ++i) {
            max = arr[i] > max ? arr[i] : max;
            if (max == i) {
                ans++;
            }
        }
        return ans;
    }
};