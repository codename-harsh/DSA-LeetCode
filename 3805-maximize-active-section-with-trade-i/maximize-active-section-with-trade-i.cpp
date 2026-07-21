class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        for(auto c: s) {
            if(c == '1'){
                ones++;
            }
        }
        string t = "1" + s + "1";
        vector<pair<char, int>> arr;
        for(auto x: t) {
            if(arr.empty() || arr.back().first != x)
                arr.push_back({x, 1});
                else 
                    arr.back().second++;
        }
        int b = 0;
        for(int i = 1; i + 1 < (int)arr.size(); i++) {
            if(arr[i].first == '1' && arr[i - 1].first == '0' && 
            arr[i + 1].first == '0') {
                b = max(b, arr[i - 1].second + arr[i + 1].second);
            }
        }
        return ones + b;
    }
};