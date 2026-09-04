class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int n=nums.size()-1,maxi=0,mini=INT_MAX;
       vector<int>minm;
       vector<int>maxm;
       int i=0,j=n;
       while(i<=n&& j>=0){
        maxi=max(nums[i],maxi);
        mini=min(nums[j],mini);
        maxm.push_back(maxi);
        minm.push_back(mini);
        i++,j--;
       }
       for(int i=0;i<=n;i++){
        if((maxm[i]-minm[n-i])<=k) return i;
       }
       return -1;
    }
};