class MyStack {
    queue<int> primary;
    queue<int> auxillary;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        primary.push(x);
    }
    
    int pop() {
        while(primary.size()>1){
            auxillary.push(primary.front());
            primary.pop();
        }
        int peak = primary.front();
        primary.pop();

        while(!auxillary.empty()){
            primary.push(auxillary.front()); 
            auxillary.pop();

        }
        return peak;
        
    }
    
    int top() {
        while(primary.size()>1){
            auxillary.push(primary.front());
            primary.pop();
        }
        int peak = primary.front();
        auxillary.push(primary.front());
        primary.pop();

        while(!auxillary.empty()){
            primary.push(auxillary.front());
            auxillary.pop();

        }
        return peak;
    }
    
    bool empty() {
        return primary.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */