//434. Number of Segments in a String

class Solution {
public:
    int countSegments(string s) {
        
        int count = 0;
        stringstream ss(s);
        string word;
        
        while(ss >> word)
        {
            count++;
        }
        
        return count;
    }
};