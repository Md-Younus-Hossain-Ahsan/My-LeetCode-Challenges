//1323. Maximum 69 Number

class Solution {
public:
    int maximum69Number (int num) {

        string numStr = to_string(num);

        for (char& digit : numStr) 
        {
            if (digit == '6') {
                digit = '9';
                break;
            }
        }
        
        return stoi(numStr);

    }
};