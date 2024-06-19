//821. Shortest Distance to a Character

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        int n = s.size();
        vector<int> result(n, n);
        int closest = -n;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == c) closest = i;
                result[i] = min(result[i], abs(i - closest));
        }

        closest = 2 * n;
        for (int i = n - 1; i >= 0; --i) 
        {
            if (s[i] == c) closest = i;
                result[i] = min(result[i], abs(i - closest));
        }

        return result;
    }
};