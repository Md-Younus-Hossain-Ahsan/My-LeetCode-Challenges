//2269. Find the K-Beauty of a Number

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string numStr = to_string(num);
        int count = 0;
        
        for (int i = 0; i <= numStr.length() - k; ++i) {
            string substr = numStr.substr(i, k);
            int substrNum = stoi(substr);
            
            if (substrNum != 0 && num % substrNum == 0) {
                count++;
            }
        }
        
        return count;
    }
};