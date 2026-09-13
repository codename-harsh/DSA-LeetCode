//Goin to do O(N^4)
class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size(), maxi = 0;
        for(int x = -(n - 1); x < n; x++) {
            for(int y = -(n -1); y < n; y++) {
                int c = 0;
                for(int i = 0; i < n && i + x < n; i++) {
                    for(int j = 0; j < n && j + y < n; j++) {
                        int nx = i + x, ny = j + y;
                        if(nx >= 0 && nx < n) {
                            if(ny >= 0 && ny < n) {
                                if(img1[nx][ny] == 1 && img2[i][j] == 1)    
                                    c++;
                            }
                        }
                    }
                }
                maxi = max(maxi, c);
            }
        }
        return maxi;
    }
};