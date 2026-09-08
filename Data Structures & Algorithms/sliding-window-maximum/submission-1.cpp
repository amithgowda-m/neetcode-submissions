class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int l = 0;
        for(int r = k-1; r < nums.size(); r++){
            int m = INT_MIN;
            for(int i = l; i <= r; i++){
                m = max(m,nums[i]);
            }
            ans.push_back(m);
            l++;
        }
        return ans;
    }
};