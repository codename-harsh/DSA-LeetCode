class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(left < right) {
            right = right & (right - 1); // basically counting 1's to return the final ans //
        }
        return right;
    }
};