class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        vector<int> freq(max + 1, 0);
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        int res = -1;
        for (int i = 1; i <= max; i++) {
            if (freq[i] == i)
                res = i;
        }
        return res;
    }
};