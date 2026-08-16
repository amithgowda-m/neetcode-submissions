class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;

        for (const string& p : tokens) {
            if (p == "+" || p == "-" || p == "*" || p == "/") {
                int b = operands.top(); operands.pop();
                int a = operands.top(); operands.pop();

                if (p == "+") operands.push(a + b);
                else if (p == "-") operands.push(a - b);
                else if (p == "*") operands.push(a * b);
                else if (p == "/") operands.push(a / b);
            } else {
                operands.push(stoi(p));
            }
        }
        return operands.top();
    }
};