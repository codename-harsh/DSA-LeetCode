class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        int min = INT_MAX, max = INT_MIN;
        for(int i =0 ; i< a.size(); i++){
            if(max<a[i]) max = a[i];
        }
        for(int i =0 ; i< a.size(); i++){
            if(min>a[i]) min = a[i];
        }
    vector<int>b;
        for(int i = min; i<=max; i++){
            int f = 0;
            for(int j=0;j<a.size();j++){
                if(a[j]==i) {
                    f = 1; 
                    break;
                   }
                 }
                    if(f==0){
                    b.push_back(i);
                   }
            }
return b;
        
    }
};