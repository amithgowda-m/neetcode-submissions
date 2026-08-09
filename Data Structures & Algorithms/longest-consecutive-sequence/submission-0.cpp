class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> s(nums.begin(),nums.end());
         int max_len=0;
         for(int num: nums){
            int curr_len = 0, curr = num;
            while(s.find(curr)!=s.end()){
                curr_len++,curr++;
            }
            max_len = max(curr_len,max_len);
         }
         return max_len;
    }
};
