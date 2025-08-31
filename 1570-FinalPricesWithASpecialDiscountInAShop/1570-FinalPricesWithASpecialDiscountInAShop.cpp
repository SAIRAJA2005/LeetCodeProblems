// Last updated: 01/09/2025, 01:01:51
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>result;
        for (int i = 0; i < prices.size(); ++i) {
            int currentPrice = prices[i];
            bool hasDiscount = false;
            
            for (int j = i + 1; j < prices.size(); ++j) {
                if (prices[j] <= currentPrice) {
                    result.push_back(currentPrice - prices[j]);
                    hasDiscount = true;
                    break;
                }
            }
            
            if (!hasDiscount) {
                result.push_back(currentPrice);
            }
        }
        return result;
    }
};