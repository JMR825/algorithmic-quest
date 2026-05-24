class MyQueue {
public:
        stack<int> stackIn;
        stack<int> stackOut;
         void transfer() {
            while(!stackIn.empty())
            {
            stackOut.push(stackIn.top());
            stackIn.pop();
        }
        }


    void push(int x) {
        stackIn.push(x);
    }
    
    int pop() {
        if (stackOut.empty()) {
            transfer();
        }
        
        int val=stackOut.top();
        stackOut.pop();
        return val;
    }
    int peek() {
        if (stackOut.empty()) {
            transfer();
        }
        return stackOut.top();
    }
    
    bool empty() {
        return stackIn.empty() && stackOut.empty();
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
