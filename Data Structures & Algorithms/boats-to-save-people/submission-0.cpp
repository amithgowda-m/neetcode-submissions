class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        for(int num: people) ans+=num;
        return (ans+limit-1)/limit;
        
    }
};