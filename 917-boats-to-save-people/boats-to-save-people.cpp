class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        if(people.size() ==1) return 1;
        sort(people.begin(), people.end());
        int c = 0, i = 0, j = people.size() - 1;
        for(; i <= j; ) {
            if(people[i]  + people[j] <= limit)
                i++;
            j--, c++;
        }
        return c;
    }
};