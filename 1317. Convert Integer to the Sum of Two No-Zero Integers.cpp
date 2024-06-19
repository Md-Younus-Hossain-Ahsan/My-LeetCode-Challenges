//1317. Convert Integer to the Sum of Two No-Zero Integers

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; ++i) {
            if (noZero(i) && noZero(n - i)) {
                return {i, n - i};
            }
        }
        return {};
    }
    
private:
    bool noZero(int num) {
        while (num > 0) {
            if (num % 10 == 0) {
                return false;
            }
            num /= 10;
        }
        return true;
    }
};