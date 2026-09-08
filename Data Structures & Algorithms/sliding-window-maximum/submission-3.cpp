class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;
        int left = 0, right =0;

        while(right < n){
            while(!dq.empty() && nums[dq.back()] < nums[right]) dq.pop_back();
            dq.push_back(right);

            if(dq.front() < left) dq.pop_front();

            if(right  >= k -1){
                ans.push_back(nums[dq.front()]);
                left++;
            }
            right++;
        }
        return ans;
    }
};