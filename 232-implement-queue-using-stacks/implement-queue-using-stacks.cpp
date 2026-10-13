class MyQueue {
public:
stack<int> s1, s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int p = -1;
        if(!s2.empty()) {
            p = s2.top();   
        } else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            p = s2.top();
        }
        s2.pop();
        return p;
    }
    
    int peek() {
        int f = -1;
        if(!s2.empty()) {
            f  = s2.top();
        } else {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            f = s2.top();
        }
        return f;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};