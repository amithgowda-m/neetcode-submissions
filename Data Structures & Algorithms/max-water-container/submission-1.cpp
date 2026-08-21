class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;

        int  l = 0, r = heights.size()-1;
        while(l < r){
            int eH = min(heights[l],heights[r]);
            ans = max(ans, eH*(r-l));

            if(heights[l]<heights[r]) l++;
            else r--;

        }
        return ans;
    }
};
