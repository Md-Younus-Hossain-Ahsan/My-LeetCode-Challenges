//866. Prime Palindrome

class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
    
    bool isPalindrome(int num) {
        int original = num;
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return original == reversed;
    }
    
    int primePalindrome(int n) {
        while (true) {
            if (isPalindrome(n) && isPrime(n)) {
                return n;
            }
            ++n;
            if (10000000 < n && n < 100000000) { // skip to next palindrome with length > 9
                n = 100000000;
            }
        }
        return -1;
    }
};