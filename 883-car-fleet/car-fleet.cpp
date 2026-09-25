class Solution {
    class Car {
        public:
            int pos, speed;
            Car(int p, int s): pos(p), speed(s) {};
    };
    static bool mycomparator(Car&a, Car&b) {
    return a.pos < b.pos;
    }
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car>cars;
        for(int i = 0; i < position.size(); ++i) {
            Car car(position[i], speed[i]);
            cars.push_back(car);
        }
        sort(cars.begin(), cars.end(), mycomparator);
        stack<float> st;
        for(auto&x: cars) {
            float t = (target - x.pos) / ((float)x.speed);
            while(!st.empty() && t >= st.top()) {
                st.pop();
            }
            st.push(t);
        }
        return st.size();
    }
};