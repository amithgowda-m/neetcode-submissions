class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(const string& op: operations){
            if(op == "+") {
                int top = st.top();
                st.pop();
                int newTop = top+st.top();
                st.push(top);
                st.push(newTop);
                
            }else if(op=="D"){
                st.push((2*st.top()));
            }else if(op =="C"){
                st.pop();

            }
            else{
                st.push(stoi(op));
            }
        }
        int res=0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};