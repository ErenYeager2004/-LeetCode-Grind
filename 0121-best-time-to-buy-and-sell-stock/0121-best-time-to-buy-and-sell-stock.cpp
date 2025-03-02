class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxProfit=0;
        int slow=0;
        int fast=1;
        while(fast<prices.size()){
            if(prices[fast]>prices[slow]){
                profit = prices[fast]-prices[slow];
                maxProfit = max(profit,maxProfit);
            }
            else {
               slow = fast;
            }

            fast++;
        }

        return maxProfit;
    }
};