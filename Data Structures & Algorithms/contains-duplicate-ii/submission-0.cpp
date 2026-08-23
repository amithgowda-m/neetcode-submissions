class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k == 0) return false;
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i = 0; i < n; i++){
            if(freq.count(nums[i]) && (i - freq[nums[i]]  <= k)){
                return true;
            }
            freq[nums[i]] = i;
        }
        return false;
    }
};