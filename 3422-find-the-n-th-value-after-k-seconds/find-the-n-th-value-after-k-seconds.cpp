class Solution {
public:
    void summ(vector<long long int> &a, int n){
        long long int l=pow(10,9)+7;
        for(int j=1;j<n;j++){
            a[j]=(((a[j]%l)+(a[j-1]%l))%l);
        }
    }
int valueAfterKSeconds(int n, int k) {
        vector<long long int>a;
        for(int i=0; i<n;i++){
            a.push_back(1);
        }
        for(int i=0;i<k;i++){
            summ(a,n);
        }
        long long int l=pow(10,9)+7;
        return (a[n-1]%l);
    }
};