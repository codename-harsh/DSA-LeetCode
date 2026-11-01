class Solution {
public:
    bool isSorted(string&s) {
        for(int i = 1; i < s.size(); ++i) {
            if(s[i] < s[i - 1]) return false;
        }
        return 1;
    }
    int minOperations(string s) {
        int n = s.size();
        if(isSorted(s)) return 0;
        if(n <= 2)  return -1;
        int ans = INT_MAX;
        //case-1: Prefix Sorting [1 ... n-1]
        {
            string t = s;
            sort(t.begin() + 1, t.end());
            if(isSorted(t)) ans = min(ans, 1);
            else {
                if(s[0] <= t[n - 1]) ans = min(ans, 2);
                else  ans = min(ans, 3);
            }
        }
        //Case-2: Suffix sorting
        {
            string t = s;
            sort(t.begin(), t.end() - 1);
            if(isSorted(t)) ans = min(ans, 1);
            else {
                if(s[n-1] >= t[0]) ans = min(ans, 2); 
                else  ans = min(ans, 3);
            }
        }
        return ans;
    }
};