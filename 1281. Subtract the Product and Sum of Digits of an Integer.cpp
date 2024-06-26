//1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int mul = 1, sum = 0;

        while(n != 0)
        {
            mul *= n % 10;
            sum += n % 10;
            n /= 10;
        }

        return mul - sum;

    }
};