class Solution {
public:
    bool isOdd(int x) {
        return x & 1;
    }

    int numOfSubarrays(vector<int>& arr) {
        long long ans = 0;
        int odd = 0, even = 1, sum = 0, modi = 1e9 + 7;
        for(int x : arr) {
            sum += x;
            if(isOdd(sum)) {
                ans += even;
                odd++;
            } else {
                ans += odd;
                ++even;
            }
            ans %= modi;
        }
        return ans;
    }
};