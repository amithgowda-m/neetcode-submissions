class MinStack {
private:
    long min;
    std::stack<long> stack;

public:
    MinStack() {}

    void push(int val) {
        if (stack.empty()) {
            stack.push(0);
            min = val;
        } else {
            if(val<min){
                stack.push((long long)2*val-min);
                min  = val;
            }else{
                stack.push(val);
            }
        }
    }

    void pop() {
        if (stack.empty()) return;

        if(stack.top()<min){
            min  =  2*min - stack.top();
        }
        stack.pop();
    }

    int top() {
        if(stack.top()<min) return min;
        else return stack.top();
    }

    int getMin() {
        return (int)min;
    }
};