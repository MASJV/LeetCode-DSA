class MinStack {
    stack<int> numbers;   //primary stack to store numbers
    stack<int> minStack;  // auxiliary stack to store minimums
public:
    MinStack() {
        
    }
    
    void push(int val) {
        numbers.push(val);

        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (numbers.top() == minStack.top()) {
            minStack.pop();
        }
        numbers.pop();
    }
    
    int top() {
        return numbers.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */