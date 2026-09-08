class MinStack {
public:
vector<pair<int, int>> st;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()) {
            pair<int, int> p= make_pair(value, value);
            st.push_back(p);
        } else {
            pair<int, int> p;
            p.first = value;
            p.second = min(value, st.back().second);
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */