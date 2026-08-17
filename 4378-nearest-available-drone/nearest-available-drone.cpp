class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int maxi = INT_MAX, dox = target[0], doy = target[1], idx = -1;
        for(int i = 0; i < drones.size(); i++){
            int x = drones[i][0], y = drones[i][1], r = drones[i][2];
            int d = abs(x - dox) + abs(y - doy);
            if(d <= r && d < maxi) {
                maxi = d;
                idx = i;
            }
        }
        return idx;
    }
};