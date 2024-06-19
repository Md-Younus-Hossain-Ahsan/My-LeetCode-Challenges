//405. Convert a Number to Hexadecimal

class Solution {
public:
    string toHex(int num) {

        if (num == 0) 
            return "0";
        
        string hex = "";
        string hexChars = "0123456789abcdef";
        
        unsigned int n = num;
        
        while (n != 0) {
            hex = hexChars[n % 16] + hex;
            n /= 16;
        }
        
        return hex;

    }
};