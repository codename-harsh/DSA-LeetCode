class Solution {
public:
    int smallestEvenMultiple(int n) {
        for(int i = 2; ; i++) { // basically what i want is to make an infinite loop and return the ans when we got it :)
            if(i % 2 == 0 && i % n == 0) 
            return i;
        }
    }
};