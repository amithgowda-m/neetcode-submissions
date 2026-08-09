class Solution {
public:
    int maxProfit(vector<int>& prices) {
        return recHelper(prices,0,false);
    }
private:
    int recHelper(vector<int> & prices, int i, bool bought){
      if(i==prices.size())return 0;
      int ans = recHelper(prices,i+1,bought);
      if(bought){
         ans = max(ans, prices[i]+ recHelper(prices,i+1,false));
      }else{
         ans = max(ans, recHelper(prices,i+1,true)-prices[i]);
      }
      return ans;
    }
};