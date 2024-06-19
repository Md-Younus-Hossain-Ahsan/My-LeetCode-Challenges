//1017. Convert to Base 2

class Solution {
public:
    string baseNeg2(int n) {

        if (n == 0) return "0";
        
        string result = "";
        while (n != 0) 
        {
            int remainder = n % -2;
            if (remainder < 0) {
                remainder += 2;
                n -= 1;
            }
            result += to_string(remainder);
            n /= -2;
        }
        
        reverse(result.begin(), result.end());
        return result;

    }
};