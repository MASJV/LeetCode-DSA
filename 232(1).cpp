class MyQueue {
    stack<int> primary;
    stack<int> auxillary;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(primary.empty()){
            primary.push(x);
            return;
        }

        while(!primary.empty()){
            auxillary.push(primary.top());
            primary.pop();
        }

        primary.push(x);

        while(!auxillary.empty()){
            primary.push(auxillary.top());
            auxillary.pop();
        }
    }
    
    int pop() {
        int peak = primary.top();
        primary.pop();
        return peak;
    }
    
    int peek() {
        return primary.top();
    }
    
    bool empty() {
        return primary.empty();
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