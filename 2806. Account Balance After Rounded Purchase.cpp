//2806. Account Balance After Rounded Purchase

class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        
        float res = purchaseAmount % 10 >= 5 ? ceil((float) purchaseAmount / 10) * 10 : floor((float) purchaseAmount / 10) * 10; 
        return 100 - (int) res;
    }
};