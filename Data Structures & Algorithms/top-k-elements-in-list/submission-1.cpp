class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        if(nums.size()==k) return nums;
        for(int n: nums) mp[n]++;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(const auto& p: mp){
            pq.push({p.second,p.first});
        }
        for(int i=0;i<k && i<pq.size();i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
