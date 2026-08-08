class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            long long total =1;
            for(int j=0;j<nums.size();j++){
                if(j!=i)  total*=nums[j];
            }
            ans.push_back(total);
        }
        return ans;
    }
};
