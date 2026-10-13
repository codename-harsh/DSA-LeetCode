class Solution {
public:
    int compareVersion(string version1, string version2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int i = 0, j = 0, n = version1.size(), m = version2.size();
        while(i < n || j < m) {
            int x = i, y = j;
            while(i < n && version1[i] != '.') i++;
            while(j < m && version2[j] != '.') j++;
            while(x < i && version1[x] == '0') x++;
            while(y < j && version2[y] == '0') y++;
            int a = i - x, b = j - y;
            if(a > b) return 1;
            if(a < b) return -1;
            while(x < i) {
                if(version1[x] > version2[y]) return 1;
                if(version1[x] < version2[y]) return -1;
                x++, y++;
            }
            i++, j++;
        }
        return 0;
    }
};