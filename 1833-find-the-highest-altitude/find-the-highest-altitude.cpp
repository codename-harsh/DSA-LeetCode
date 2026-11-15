class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0, ans=0;
        for(int &g: gain) {
            sum+=g;
            ans=max(ans,sum);
        }
        return ans;
    }
};