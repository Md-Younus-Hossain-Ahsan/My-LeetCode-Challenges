//67. Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.size() - 1, j = b.size() - 1;
        string output;
        char carry = '0';

        while (i >= 0 || j >= 0 || carry == '1') {
            char sum = carry;
            if (i >= 0) 
                sum += a[i--] - '0';
            if (j >= 0) 
                sum += b[j--] - '0';

            if (sum == '2') 
            {
                output.push_back('0');
                carry = '1';
            } 
            else if (sum == '3') {
                output.push_back('1');
                carry = '1';
            } 
            else {
                output.push_back(sum);
                carry = '0';
            }
        }

        reverse(output.begin(), output.end());
        return output;

    }
};