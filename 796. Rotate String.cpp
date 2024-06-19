//796. Rotate String

class Solution {
public:
    bool rotateString(string s, string goal) {
        
        string res = s;

        for(int i=0; i < s.size(); i++)
        {
            res += s[i];
            if(res.substr(i+1, s.size()+i) == goal)
                return true;
        }

        return false;
    }
};