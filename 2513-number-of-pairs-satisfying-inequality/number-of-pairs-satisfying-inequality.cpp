class Solution {
public:
long long count;
int diff;

    void merge(vector<int>&v, int l, int r, int mid){
        if(l >= r) return;
        vector<int> t;
        int ll = l, rr = mid + 1;
        while(ll <= mid && rr <= r) {
            if(v[ll] + diff < v[rr]) {
                ll++;
            } else {
                count += (mid - ll + 1);
                rr++;
            }
        }
        ll = l, rr = mid+1;
        while(ll <= mid && rr <= r) {
            if(v[ll] <= v[rr]) {
                t.push_back(v[ll]);
                ll++;
            } else {
                t.push_back(v[rr]);
                rr++;
            }
        }
        //Now checkin if there is still some elements rather than l< r
        while(ll <= mid) {
            t.push_back(v[ll]);
            ll++;
        }
        while(rr <= r) {
            t.push_back(v[rr]);
            rr++;
        }      
        for(int i = l; i <= r; i++) {
            v[i] = t[i - l];
        }
    }

    void mergesort(vector<int>&v, int l, int r) {
        if(l >= r)  
            return;
        int mid = l + (r-l) / 2;
        mergesort(v, l, mid);
        mergesort(v, mid+1, r);
        merge(v, l, r, mid);
    }

    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        this->count = 0;
        this->diff = diff;
        int l = 0, r = nums1.size() - 1;    
        vector<int> nums(nums1.size());
        for(int i = 0; i < nums1.size(); i++) {
            nums[i] = nums2[i] - nums1[i];
        }
        mergesort(nums, l, r);
        return this->count;
    }
};