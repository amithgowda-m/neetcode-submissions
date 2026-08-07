class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int n: nums) mp[n]++; //we are storing frequency of each elememt here
        vector<pair<int,int>> freq; //to store pair of freq and element
        for(const auto&  p : mp) freq.push_back({p.second,p.first}); 
        vector<int> ans;
        sort(freq.rbegin(),freq.rend());// sorting based on frequency in descending order
        for(int i=0;i<k && !freq.empty();i++) ans.push_back(freq[i].second); //getting max k frequent element
        return ans;
    }
};
