class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int kn = k % nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+kn);
        reverse(nums.begin()+kn,nums.end());
    }
};