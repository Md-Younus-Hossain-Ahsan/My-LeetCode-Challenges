//744. Find Smallest Letter Greater Than Target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int found = 123;

        for(int i=0; i < letters.size(); i++)
        {
            if((int) letters[i] > (int) target && found > (int) letters[i])
            {
                found = (int) letters[i];
            }
        }

        if(found == 123)
            return letters[0];
        
        return (char) found;

    }
};