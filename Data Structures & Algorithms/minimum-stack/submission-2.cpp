class MinStack {
private:
    int mn = INT_MAX;
    stack<int> st, minStack;
public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if (val <= mn) {
            mn = val;
            minStack.push(val);
        }
    }
    
    void pop() {
        if (minStack.top() == st.top()) minStack.pop();
        st.pop();
        if (minStack.empty()) mn = INT_MAX;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        if(!minStack.empty()) return minStack.top();
        else return st.top();
    }
};
