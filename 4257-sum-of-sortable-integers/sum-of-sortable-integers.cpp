class Solution {
public:
    // KMP search: check if pattern exists in text
    bool kmpSearch(const vector<int>& text, const vector<int>& pattern) {
        int n = text.size(), m = pattern.size();
        vector<int> lps(m,0);
        // build LPS array
        for (int i=1,len=0; i<m;) {
            if (pattern[i]==pattern[len]) lps[i++] = ++len;
            else if (len) len = lps[len-1];
            else lps[i++] = 0;
        }
        // search
        for (int i=0,j=0; i<n;) {
            if (text[i]==pattern[j]) { i++; j++; if (j==m) return true; }
            else if (j) j = lps[j-1];
            else i++;
        }
        return false;
    }

    bool isRotation(vector<int>& a, vector<int>& b) {
        if (a.size()!=b.size()) return false;
        vector<int> doubled = a;
        doubled.insert(doubled.end(), a.begin(), a.end());
        return kmpSearch(doubled, b);
    }

    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        // find divisors
        vector<int> divisors;
        for (int d=1; d*d<=n; d++) {
            if (n%d==0) {
                divisors.push_back(d);
                if (d!=n/d) divisors.push_back(n/d);
            }
        }

        int ans=0;
        for (int k: divisors) {
            bool ok=true;
            for (int i=0; i<n; i+=k) {
                vector<int> block1(nums.begin()+i, nums.begin()+i+k);
                vector<int> block2(sortedNums.begin()+i, sortedNums.begin()+i+k);
                if (!isRotation(block1, block2)) { ok=false; break; }
            }
            if (ok) ans+=k;
        }
        return ans;
    }
};