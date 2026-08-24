class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k == 0) return false;
        int n = nums.size();
        unordered_set <int> sw;

        int left = 0;
        for(int right = 0; right < n; right++){
            if(right - left > k){
                sw.erase(nums[left]);
                left++;
            }
            if(sw.find(nums[right] )!= sw.end()){
                return true;
            }
            sw.insert(nums[right]);
        }
        return false;
    }
};