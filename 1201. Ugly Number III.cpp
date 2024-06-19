//1201. Ugly Number III

class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {

        long long low = 1, high = INT_MAX;
        long long lcm_ab = lcm(a, b);
        long long lcm_ac = lcm(a, c);
        long long lcm_bc = lcm(b, c);
        long long lcm_abc = lcm(lcm_ab, c);

        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long count = countUgly(mid, a, b, c, lcm_ab, lcm_ac, lcm_bc, lcm_abc);

            if (count < n)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
        
    }

private:
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    long long countUgly(long long x, long long a, long long b, long long c, long long lcm_ab, long long lcm_ac, long long lcm_bc, long long lcm_abc) {
        return x / a + x / b + x / c
             - x / lcm_ab - x / lcm_ac - x / lcm_bc
             + x / lcm_abc;
    }
};