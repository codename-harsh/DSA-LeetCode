class Solution {
private:
    int getnumber(string&s) {
        vector<int> v = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(s.substr(0, 2)), date = stoi(s.substr(3, 2));
        for(int i = 0; i < month - 1; ++i) {
            date += v[i];
        }
        return date;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        const int sa = getnumber(arriveAlice), sb = getnumber(arriveBob);
        const int ea = getnumber(leaveAlice), eb = getnumber(leaveBob);
        int shuru = max(sa, sb), khtm = min(ea, eb);
        return max(0, khtm - shuru + 1);
    }
};