class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;

        for (int right = 0; right < n; right++) {

            while (!dq.empty() && nums[dq.back()] < nums[right]) {
                dq.pop_back();
            }

            dq.push_back(right);


            if (!dq.empty() && dq.front() <= right - k) {
                dq.pop_front();

            }

            if (right >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};