//793. Preimage Size of Factorial Zeroes Function

class Solution {
public:
    int preimageSizeFZF(int k) {
        long long left = 0, right = 5LL * (k + 1);
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            int zeros = countTrailingZeros(mid);
            if (zeros < k) {
                left = mid + 1;
            } else if (zeros > k) {
                right = mid - 1;
            } else {
                return 5;
            }
        }
        return 0;
    }
    
    int countTrailingZeros(long long n) {
        int zeros = 0;
        while (n > 0) {
            zeros += n / 5;
            n /= 5;
        }
        return zeros;
    }
};