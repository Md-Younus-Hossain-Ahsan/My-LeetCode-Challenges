//7. Reverse Integer

class Solution {
public:
    int reverse(int x) {

        int N = 0;

        while (x != 0) {
            int digit = x % 10;

            if (N > INT_MAX / 10 || (N == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (N < INT_MIN / 10 || (N == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            N = N * 10 + digit;
            x /= 10;
        }

        return N;
    }
};