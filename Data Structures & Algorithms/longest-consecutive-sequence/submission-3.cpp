class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0) return 0;
         sort(nums.begin(),nums.end());
         int max_len = 1, curr_len=1;
         for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]) continue;
            if(nums[i+1] == nums[i]+1){
               curr_len++;
               max_len = max(curr_len,max_len);
            }
                
            else curr_len= 1;

         }
         return max_len;
    }
};
