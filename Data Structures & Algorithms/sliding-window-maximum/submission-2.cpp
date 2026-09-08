class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> hp;

        for(int i = 0; i < nums.size(); i++){
            hp.push({nums[i], i});
            if(i >= k-1 ){
                while(hp.top().second <= i - k) hp.pop();
                ans.push_back(hp.top().first);
            }
        }

        return ans;
    }
};