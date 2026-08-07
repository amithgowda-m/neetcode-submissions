class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i < n;i++){
            int count =0;
            for(int num: nums){
                if(num==nums[i]) count++;
                if(count>floor(n/2)) return num;
            }
            
        }
        return -1;
    }
};