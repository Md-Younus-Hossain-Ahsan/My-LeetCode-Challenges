//925. Long Pressed Name

class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        int nlen = name.size();
        int tlen = typed.size();
        int j = 0;

        if (nlen > tlen)
            return false;

        for (int i = 0; i < tlen; ++i) 
        {
            if (j < nlen && name[j] == typed[i]) 
            {
                ++j;
            } 
            else if (i == 0 || typed[i] != typed[i - 1]) 
            {
                return false;
            }
        }

        return j == nlen;
    }
};