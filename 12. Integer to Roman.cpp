12. Integer to Roman

class Solution {
public:
    string intToRoman(int num) {
        
        map<int, string, greater<int>> romanMap = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };

    string result = "";

    for (const auto &pair : romanMap) {
        while (num >= pair.first) {
            num -= pair.first;
            result += pair.second;
        }
    }

    return result;
        
    }
};