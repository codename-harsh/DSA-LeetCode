class Solution {
public:
static vector<int> f;
    static bool cmp(int a, int b) {
        if(f[a + 100] == f[b + 100])
        return a > b;
        return f[a + 100] < f[b + 100];
    }
    vector<int> frequencySort(vector<int>& nums) {
        f.assign(201, 0);
        for(int &x: nums) {
            f[x + 100]++;
        }
        sort(nums.begin(), nums.end(), cmp);
        return nums;
    }
};
vector<int> Solution :: f;
//here we doin +100 so as to convert those shitty -ve nums t +ve !!