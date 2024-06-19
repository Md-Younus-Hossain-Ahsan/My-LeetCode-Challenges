//1390. Four Divisors

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum += findSumOfDivisors(num);
        }
        return sum;
    }
    
    int findSumOfDivisors(int num) {
        int divisorCount = 0;
        int sumOfDivisors = 0;
        
        for (int i = 1; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                divisorCount++;
                sumOfDivisors += i;
                if (i != num / i) {
                    divisorCount++;
                    sumOfDivisors += num / i;
                }
            }
        }
        
        if (divisorCount == 4) {
            return sumOfDivisors;
        } else {
            return 0;
        }
    }
};