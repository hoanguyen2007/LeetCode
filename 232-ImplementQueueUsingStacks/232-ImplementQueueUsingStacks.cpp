// Last updated: 2/20/2026, 8:34:05 PM
class MyQueue {
private:
    std::stack<int> s1;
    std::stack<int> s2; 
    void moveData() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

public:
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        moveData();
        int val = s2.top();
        s2.pop();
        return val;
    }
    
    int peek() {
        moveData();
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */