//9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {

        long N = 0;

        if (x < 0 || (x % 10 == 0 && x != 0)) 
            return 0;        

        for (long i = x; i != 0; i /= 10) {
            N = N * 10 + i % 10;
        }

        if (N == x)
            return 1;
        else
            return 0;
    }
};