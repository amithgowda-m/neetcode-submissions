class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> numSet(nums.begin(),nums.end());
         int max_len = 0;
         for(int num: numSet){
            if(numSet.find(num-1) == numSet.end()){
               int currLen = 1;
               while(numSet.find(num+currLen)!=numSet.end()){
                  currLen++;
               }
               max_len = max(currLen, max_len);
            }
         }
         return max_len;
    }
};
