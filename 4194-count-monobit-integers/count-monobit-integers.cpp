class Solution {
public:
string decimalToBinary(int n) {
    if (n == 0) return "0";
    string ans = "";
    while (n > 0) {
        ans += (n % 2) + '0';
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

    int countMonobit(int n) {
        int c = 0;
        for(int i = 0; i <= n; i++) {
            string bin = decimalToBinary(i);
            if(count(bin.begin(), bin.end(), bin[0]) == bin.size()) { //Ye poori string me bin[0] kitni baar aaya hai uska count dega hehe
                c++;
            }
        }
        return c;
    }
};