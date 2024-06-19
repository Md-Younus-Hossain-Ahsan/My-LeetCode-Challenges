//2138. Divide a String Into Groups of Size k

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int len = s.size();
        int z = len % k == 0 ? 0 : k - len % k;
        string as(z, fill);        
        s = s + as;
        
        vector<string> result;

        for (int i = 0; i < len; i += k) {
            result.push_back(s.substr(i, k));
        }

        return result;
    }
};