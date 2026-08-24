class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        
        int buyDay = 0;
        int sellDay = 1;
        int maxProfit = 0;

        while( sellDay < n ){
            if(prices[sellDay] > prices[buyDay]){
                maxProfit = max(maxProfit, prices[sellDay]- prices[buyDay]);
            }
            else{
                buyDay = sellDay;
            }
            sellDay++;
        }

        return maxProfit;
    }
};