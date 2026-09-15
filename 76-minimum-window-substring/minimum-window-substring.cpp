class Solution {
public:
    string minWindow(string s, string t) {
    unordered_map<char, int> count;
    int min_j = INT_MAX, min_i = 1, i = 0;
    for(int i = 0; i < t.length(); i++){
        count[t[i]] ++;
    }
    int remain = count.size(); // Number of distinct characters in t
    
    for(int j = 0; j < s.length(); j++){
        count[s[j]] --; 
        if(count[s[j]] == 0) remain--;
        while(remain == 0){
            if(j-i < min_j - min_i){ // Update global variables since we need to return the string
                min_j = j;
                min_i = i;
            }
            // Remove i from the window and increment i
            count[s[i]] ++;
            if(count[s[i]] > 0) remain++;
            i++;
        }
    }
    return min_j == INT_MAX ? "" : s.substr(min_i, min_j - min_i+1);
}
};