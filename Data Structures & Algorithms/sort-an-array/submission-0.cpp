class Solution {
public:
    void merge(vector<int> & arr1, vector<int>&arr2, vector<int>& ans){
        int i=0,j=0;
        
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<arr2[j]) ans.push_back(arr1[i++]);
            else ans.push_back(arr2[j++]);
        }
        while(i<arr1.size())  ans.push_back(arr1[i++]);;
        while(j<arr2.size()) ans.push_back(arr2[j++]);
    }
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<=1) return nums;
         vector<int> ans;
        int n = nums.size();
        int mid = n/2;
        vector<int> arr1(nums.begin(),nums.begin()+mid);
        vector<int> arr2(nums.begin()+mid,nums.end());
        arr1 = sortArray(arr1);
        arr2 = sortArray(arr2);
        merge(arr1,arr2,ans);
        return ans;
    }
};