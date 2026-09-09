//We gonna do it with merge sort
class Solution {
public:
int c = 0;

    void merge(int l, int r, int mid, vector<int>& v) {
        int n1 = mid - l + 1, n2 = r - mid;
        vector<int> left(n1), right(n2);
        for(int i = 0; i < n1; i++) left[i] =v[l + i];
        for(int i = 0 ; i < n2; i++) right[i] = v[mid + 1+ i];
        // countin those damn inversions 
        int jj = mid + 1;
        for (int i = l; i <= mid; i++) {
            while (jj <= r && (long long)v[i] > 2LL * v[jj]) {
                jj++;
            }
            c += (jj - (mid + 1));
        }
        int i = 0, j = 0, k = l;
        while(i < n1 && j < n2) {
            if(left[i] <= right[j]) {
                v[k] = left[i++];
            } else {
                v[k] = right[j++];
            }
            k++;
        }
        //now separately check em and doin the remaininshit 
        while(i < n1)   v[k++] = left[i++];
        while(j < n2)   v[k++] = right[j++];
    }

    void mergesort(int l, int r, vector<int>&v) {
        if(l >= r) return;
        int mid = l +(r - l)/ 2;
        mergesort(l, mid, v);
        mergesort(mid+1, r, v);
        merge(l, r, mid, v);
    }

    int reversePairs(vector<int>& v) {
        mergesort(0, v.size() - 1, v);
        return c;
    }
};