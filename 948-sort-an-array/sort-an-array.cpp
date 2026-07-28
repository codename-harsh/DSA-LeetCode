class Solution {
private:
    void merge(vector<int>& nums, vector<int>& temp, int l, int mid, int r) {
        int i = l, j = mid + 1, k = l;
        while(i <= mid && j <= r) {
            if(nums[i] <= nums[j])
                temp[k++] = nums[i++];
            else
                temp[k++] = nums[j++];
        }
        // now handlin the remaninig shit :d
        while(i<=mid) temp[k++] = nums[i++];
        while(j <= r) temp[k++] = nums[j++];
        // Ok so till now we have altered the temp vector only.. now copying the values into the main nums vector
        while(l <= r) {
            nums[l] = temp[l]; ++l;
        }
    }


private:
    void mergesort(vector<int>& nums, vector<int>& temp, int l, int r) {
        if(l >= r) 
            return;
        int mid = l + (r - l) / 2;
        // now the RE call for left part
        mergesort(nums, temp, l, mid);
        // now the RE call for right part
        mergesort(nums, temp, mid + 1, r);
        // simply merge both the parts
        merge(nums, temp, l, mid, r);
    }

public: //so i'm gonna go with the merge sort algo
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size(), 0);
        mergesort(nums, temp, 0, nums.size() - 1);
        return nums;
    }
};