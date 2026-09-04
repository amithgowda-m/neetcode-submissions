class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int l = 0, r = 0;
        int currSum = nums[l];
        
        while(r < nums.size()){
            if(currSum < target){
                r++;
                if(r<nums.size()) currSum +=nums[r];
            }
            else{
                if(nums[l] >= target || nums[r] >= target) return 1;
                while(currSum >= target) {
                    minLen = min(minLen, r-l+1);
                    currSum -= nums[l++];
                }
                
            }
        }
        if(minLen == INT_MAX && r == nums.size()) minLen = 0;

        return minLen;
    }
};