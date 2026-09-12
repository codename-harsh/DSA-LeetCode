class Solution {
    private: 
    vector<int> PrevSmallerIndex(vector<int>& heights) {
        stack<int> s; s.push(-1);
        vector<int> ans(heights.size());
        for(int i = 0; i < heights.size(); i++) {
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr) {
                s.pop(); // ans is available in stack 
            }
            ans[i] = s.top(); // prev smaller element got, so store it 
            s.push(i); //push the current index
        }
        return ans;
    }

    vector<int> NextSmallerIndex(vector<int>& heights) {
        stack<int> s; s.push(-1);
        vector<int> ans(heights.size());
        for(int i = heights.size() - 1; i >= 0; i--) {
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr) {
                s.pop(); // ans is available in stack 
            }
            ans[i] = s.top(); // next smaller element got, so store it 
            s.push(i); //push the current index
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> psi = PrevSmallerIndex(heights), nsi = NextSmallerIndex(heights);
        int maxi = INT_MIN;
        for(int i = 0; i < heights.size(); i++) {
            if(nsi[i] == -1) nsi[i] = heights.size();
            int l = heights[i], w = nsi[i] - psi[i] - 1;
            int area = l * w;
            maxi = max(area, maxi);
        }
        return maxi;
    }
};