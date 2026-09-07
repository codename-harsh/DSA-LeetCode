class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0, mini = 0;
        for(auto x : nums) {
            sum += x;
            mini = min(mini, sum);
        }
        return (1 - mini);
    }
};