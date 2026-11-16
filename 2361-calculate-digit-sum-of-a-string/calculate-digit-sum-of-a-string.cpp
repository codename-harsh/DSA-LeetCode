class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string nxt = "";
            for (int i = 0; i < s.length(); i += k) {
                int sum = 0;
                for (int j = i; j < s.length() && j < i + k; j++)
                    sum += s[j] - '0';
                nxt += to_string(sum);
            }
            s = nxt;
        }
        return s;
    }
};