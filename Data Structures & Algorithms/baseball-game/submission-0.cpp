class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stk;
        for(const string& op: operations){
            if(op == "+") {
                int top = stk.back();
                stk.pop_back();
                int newTop = top+stk.back();
                stk.push_back(top);
                stk.push_back(newTop);
                
            }else if(op=="D"){
                stk.push_back((2*stk.back()));
            }else if(op =="C"){
                stk.pop_back();

            }
            else{
                stk.push_back(stoi(op));
            }
        }
        return accumulate(stk.begin(),stk.end(),0);
    }
};