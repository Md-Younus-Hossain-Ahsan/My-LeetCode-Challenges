//709. To Lower Case

class Solution {
public:
    string toLowerCase(string s) {
        
        string output;

        for(int i=0; i < s.size(); i++)
        {
            if((int) s[i] >= 65 && (int) s[i] <= 90)
            {
                output.push_back((char) ((int) s[i] + 32));
                continue;
            }

            output.push_back(s[i]);
        }

        return output;
    }
};