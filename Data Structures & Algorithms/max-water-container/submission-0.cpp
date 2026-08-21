class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;

        for(int i =0 ;i<heights.size()-1; i++){
            for(int j = i+1; j<heights.size();j++){
                int eH = min(heights[i],heights[j]);
                ans = max(ans,eH*(j-i));
            }
        }
        return ans;
    }
};
