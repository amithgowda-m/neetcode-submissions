class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int bp = INT_MAX;
        for(int i =0; i < prices.size()-1; i++){
            if(prices[i]< prices[i+1]){
                bp = min(bp,prices[i]);
                
            } 
            else if(prices[i] > prices[i+1]){
                ans = max(ans, prices[i] - bp);
            } 
        }
        return ans;
    }
};
