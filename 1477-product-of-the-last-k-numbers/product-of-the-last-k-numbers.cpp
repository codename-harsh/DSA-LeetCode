class ProductOfNumbers {
public:
//so it is the easiest problem from past 7 days haha 
//all we have to do is multiply last k digits to an ans variable initialised with 1 huh ;)
    vector<int> v; //a damn vector to get all the water from the stream .. i meant elements xD
    ProductOfNumbers() {
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int ans = 1, n = v.size();
        for(int i = n-k; i < n; ++i) ans *= v[i];
        return ans;
    }
};