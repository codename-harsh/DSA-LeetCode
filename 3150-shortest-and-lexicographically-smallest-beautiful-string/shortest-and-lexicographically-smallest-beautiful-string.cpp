class Solution {
    // true if a is better than b: shorter, or same length and lex smaller
    bool better(const string& a, const string& b) {
        if (a.size() != b.size())
            return a.size() < b.size();
        return a < b;
    }

public:
    string shortestBeautifulSubstring(string s, int k) {
        int totalOnes = count(s.begin(), s.end(), '1');
        if (totalOnes < k)
            return "";

        string ans = s;
        int ones = 0;
        int start = 0;
        const int n = s.size();
        for (int end = 0; end < n; ++end) {
            if (s[end] == '1')
                ++ones;

            if (ones == k) {
                string cur = s.substr(start, end - start + 1);
                if (better(cur, ans))
                    ans = cur;
            }
            // shrink: drop the leftmost '1' of this window, and any leading zeros
            while (start < n && (ones == k || s[start] == '0')) {
                if (s[start] == '1')
                    --ones;
                ++start;
            }
        }

        return ans;
    }
};