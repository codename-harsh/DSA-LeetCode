class Solution {
public:
    int totalNumbers(auto& digits) {
        int f[10] = {0};
        int ans = 0;
        for (const auto& d : digits)
            f[d]++;
        for (int i = 1; i < 10; i++) 
            for (int j = 0; j < 10; j++) 
                for (int k = 0; k < 9; k += 2) 
                    ans += f[i] > 0 &&
                           f[j] > (i == j) &&
                           f[k] > (i == k) + (j == k);
        return ans;
    }
};