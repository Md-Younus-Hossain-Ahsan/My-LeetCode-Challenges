//231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {

        double base = 2;

        if (n <= 0) {
            return false;  // Numbers less than or equal to 0 are not powers of 2
        }

        double result = log(N) / log(base);

        if ((result * 10) % 10 == 0)
            return 1;
        else
            return 0;
    }
};