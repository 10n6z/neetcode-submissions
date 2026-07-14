class MinStack {
public:
    stack<int> st, minStack;

    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if (minStack.empty() || 
            !minStack.empty() and minStack.top() >= val) 
                minStack.push(val);
    }
    
    void pop() {
        if(st.top() == minStack.top()) minStack.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
