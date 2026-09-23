class Solution {
public:
    int n;
    vector<vector<int>> dp;

    int solve(int i, int buy, vector<int>& prices){
        if(i == n) return 0;

        if(dp[i][buy] != -1) return dp[i][buy];

        int profit = 0;

        if(buy){
            profit = max(
                -prices[i] + solve(i+1, 0, prices),  
                solve(i+1, 1, prices)               
            );
        } else {
            profit = max(
                prices[i] + solve(i+1, 1, prices), 
                solve(i+1, 0, prices)             
            );
        }

        return dp[i][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        n = prices.size();
        dp = vector<vector<int>>(n, vector<int>(2, -1));
        return solve(0, 1, prices); 
    }
};