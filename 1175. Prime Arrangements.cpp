//1175. Prime Arrangements

class Solution {
public:
    int numPrimeArrangements(int n) {
        int prime_count = countPrimes(n);
        int non_prime_count = n - prime_count;

        long long prime_factorial = factorial(prime_count);
        long long non_prime_factorial = factorial(non_prime_count);

        long long result = (prime_factorial * non_prime_factorial) % MOD;
        return result;
    }

private:
    const int MOD = 1e9 + 7;

    int countPrimes(int n) {
        vector<bool> is_prime(n + 1, true);
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i <= sqrt(n); ++i) {
            if (is_prime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    is_prime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i <= n; ++i) {
            if (is_prime[i]) {
                count++;
            }
        }

        return count;
    }

    long long factorial(int n) {
        long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result = (result * i) % MOD;
        }
        return result;
    }
};