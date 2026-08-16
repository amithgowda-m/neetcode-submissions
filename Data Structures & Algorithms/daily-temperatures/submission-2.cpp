class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::vector<int> stack(temperatures.size());
        int sp = -1;
        stack[++sp] = 0;
        std::vector<int> r(temperatures.size(), 0);
        for (int i = 1; i < temperatures.size(); i++) {
            while (sp >= 0 && temperatures[stack[sp]] < temperatures[i]) {
                int index = stack[sp--];
                r[index] = i - index;
            }
            stack[++sp] = i;
        }
        return r;
    }
};