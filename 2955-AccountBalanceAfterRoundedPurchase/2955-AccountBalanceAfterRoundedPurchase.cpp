// Last updated: 01/09/2025, 00:58:41
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        return 100 - floor((purchaseAmount + 5) / 10) * 10;
    }
};