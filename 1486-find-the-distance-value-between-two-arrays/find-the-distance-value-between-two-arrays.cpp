class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c = 0;
        for(int &i: arr1) {
            bool f = true;
            for(int &j: arr2) {
                if(abs(i - j) <= d) {
                    f = false;
                    break;
                }
            }
            if(f) ++c;
        }
        return c;
    }
};