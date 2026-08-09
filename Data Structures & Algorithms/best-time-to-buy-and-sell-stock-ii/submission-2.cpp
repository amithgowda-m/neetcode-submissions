class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return helper(prices,0,0,dp);
    }
private: 
    int helper(vector<int>& prices, int i, int bought, vector<vector<int>> &dp ){
        if(i==prices.size()){
            return 0;
        }
        if(dp[i][bought]!=-1) return dp[i][bought];
        int ans = helper(prices,i+1,bought,dp); //skip this day
        if(bought) ans= max(ans,prices[i]+helper(prices,i+1,0,dp)); //bought->sold
        else ans = max(ans, -prices[i]+helper(prices,i+1,1,dp)); //buying now

        return dp[i][bought] = ans;
    }
};