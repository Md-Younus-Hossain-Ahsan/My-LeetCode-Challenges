//202. Happy Number

class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> seen;
        
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = getNext(n);
        }
        
        return n == 1;
        
    }
    
    int getNext(int n) {
        
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;

    }
};