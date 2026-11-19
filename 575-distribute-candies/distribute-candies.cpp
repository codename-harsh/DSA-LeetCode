class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int c = 1;
        for (int i = 1; i < candyType.size(); i++) {
            if (candyType[i] != candyType[i - 1])
                c++;
        }
        return min(c, (int)candyType.size() / 2);
    }
};