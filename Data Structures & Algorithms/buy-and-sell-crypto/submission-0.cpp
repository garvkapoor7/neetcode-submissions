class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int max_profit = 0;
        int sell = 1;
        for(int i=1; i < prices.size(); i++){
            if(prices[i]>prices[buy]){
               int profit= prices[i] - prices[buy];
               max_profit = max(max_profit,profit);

            }
            else{
                buy=sell;
            }
            sell++;
        }
        return max_profit;
    }
};
