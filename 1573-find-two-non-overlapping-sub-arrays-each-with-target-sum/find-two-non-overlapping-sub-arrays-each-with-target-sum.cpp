class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int ans = INT_MAX, n = arr.size(), l = 0, sum = 0;
        vector<int> v(n, INT_MAX);//index 0 se i tak jo target-sum subarray mila hai, uski minimum length kya hai?
        for(int r = 0; r < n; r++) {
            sum += arr[r];
            while(sum > target) {
                sum -= arr[l++];
            }
            if(sum == target) {
                int curr = r - l + 1;//length of the current window 
                if(l > 0 && v[l - 1] != INT_MAX) { // finding minimum length 
                    ans = min(ans, curr + v[l - 1]);
                }
                v[r] = curr;//updation of tracks
            }
            if(r > 0) {//Agar current index pe naya target subarray nahi mila, toh previous best ko aage le jao
                v[r] = min(v[r], v[r-1]);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};