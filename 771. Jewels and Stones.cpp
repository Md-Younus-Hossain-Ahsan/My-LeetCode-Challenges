//771. Jewels and Stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count = 0;

        for(char s : stones) 
        {
            if (jewels.find(s) != string::npos)
                count++;
        }

        return count;
    }
};