//1518. Water Bottles

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int remain = 0;
        int res = numBottles;
        
        while(numBottles >= numExchange)
        {
            remain = numBottles % numExchange;
            numBottles = numBottles / numExchange;
            res += numBottles;
            numBottles += remain;
        }
        
        return res;
    }
};