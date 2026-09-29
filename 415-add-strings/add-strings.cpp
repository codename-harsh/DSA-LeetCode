class Solution {
public:
    string addStrings(string num1, string num2) {
        int p1 = num1.size() - 1, p2 = num2.size() - 1;
        string ans = "";
        int c = 0;
        while (p1 >= 0 || p2 >= 0 || c > 0) {
            int sum = c;
            if (p1 >= 0) {
                sum += num1[p1--] - '0';
            }
            if (p2 >= 0) {
                sum += num2[p2--] - '0';
            }
            ans += char(sum % 10 + '0');
            c = sum / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};