class Solution {
public:
// harshvardhan SIngh!
    int maximumXorProduct(long long x, long long y, int n) {
        long long xi, yi, M=1e9+7;
        for(int i=n-1 ; i>=0;  i--){
            xi = x&(1ll<<i);
            yi = y&(1ll<<i);
            if(!xi && !yi){
                x|=(1ll<<i);
                y|=(1ll<<i);
            } else if(!yi && x>y){
                y|=(1ll<<i);
                x^=(1ll<<i);
            } else if(!xi && y>x){
                x|=(1ll<<i);
                y^=(1ll<<i);
            }
        }
        return ((x%M)*(y%M))%M;
    }
};