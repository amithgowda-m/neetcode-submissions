class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      vector<vector<int>> dp(n+1,vector<int>(2,-1));

      dp[n][0] = 0,dp[n][1] = 0;

      for(int i=n-1;i>=0;i--){
         dp[i][0] = max(dp[i+1][0],-prices[i]+dp[i+1][1]);//max of skipping and buying
         dp[i][1] = max(dp[i+1][1],prices[i]+dp[i+1][0]);//max of skipping and today and buying tommorow
      }
      return dp[0][0];
    }
};