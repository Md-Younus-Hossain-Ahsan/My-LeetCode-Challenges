//459. Repeated Substring Pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();

        for (int len = 1; len <= n / 2; ++len) 
        {
            if (n % len != 0) continue;

            string sub = s.substr(0, len);
            int repeats = n / len;

            string repeatedSub = "";
            for (int i = 0; i < repeats; ++i) 
            {
                repeatedSub += sub;
            }

            if (repeatedSub == s) 
            {
                return true;
            }
        }

        return false;
    }
};