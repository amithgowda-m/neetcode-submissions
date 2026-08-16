class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;

        for(auto& p: tokens){
            if(p== "+" ){
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int result = a+b;
                operands.push(result);
            }
            else if(p== "-" ){
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int result = a-b;
                operands.push(result);
            }
            else if(p== "*" ){
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int result = a*b;
                operands.push(result);
            }


            else if(p== "/" ){
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int result = a/b;
                operands.push(result);
            }
            else operands.push(stoi(p));
        }
        return operands.top();
    }
};
