class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = INT_MAX;
        int current = 0;
        for (int i=0; i<prices.size(); i++){
            if (prices[i] < min){
                min = prices[i];
            }
            current = prices[i] - min;
            if (profit < current){
                profit = current;
            }
        }
        return profit;
    }
};
