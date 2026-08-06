class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix[0].size() * matrix.size() - 1, r = matrix.size(),
            c = matrix[0].size();
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int v = matrix[mid / c][mid % c];
            if (v == target) {
                return true;
            } else if (v > target)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return false;
    }
};