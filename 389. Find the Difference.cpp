//389. Find the Difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0; i < t.size(); i++)
        {
            if(s[i] != t[i])
                return t[i];
        }

        if(s.size() == 0)
            return t[0];

        return -1;

    }
};