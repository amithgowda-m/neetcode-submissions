class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<int> s;
        for(int i = 0 ;i < temperatures.size(); i++){
            int temp = temperatures[i];
            while(!s.empty() && temp > temperatures[s.top()]){
                res[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};