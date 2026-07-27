class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++) {
            string s = to_string(i);
            int n = s.size();
            if(n % 2 != 0) continue;
            int mid = n / 2, l = 0, r = 0;
            for(int j = 0 ; j < mid; j++) {
                l += s[j] - '0';
                r += s[j + mid] - '0';
            }
            if(l == r) ans ++;
        }
        return ans;
    }
};