class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int> freq1(26, 0), freq2(26, 0);
        for (int i = 0; i < word1.size(); i++) {
            freq1[word1[i] - 'a']++;
        }
        for (int i = 0; i < word2.size(); i++) {
            freq2[word2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                if (freq1[i] > 0 && freq2[j]) {
                    freq1[i]--;
                    freq2[j]--;
                    freq1[j]++;
                    freq2[i]++;
                    int cnt1 = 0, cnt2 = 0;
                    for (int k = 0; k < 26; k++) {
                        if (freq1[k] >= 1)
                            cnt1++;
                        if (freq2[k] >= 1)
                            cnt2++;
                    }
                    if (cnt1 == cnt2)
                        return true;
                    freq1[j]--;
                    freq2[i]--;
                    freq1[i]++;
                    freq2[j]++;
                }
            }
        }

        return false;
    }
};