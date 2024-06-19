//2575. Find the Divisibility Array of a String

class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        int len = word.size();
        long long number = 0;
        vector<int> result;

        for(int i = 0; i < len; i++) 
        {
            number = (number * 10 + (word[i] - '0')) % m;
            result.push_back(number == 0);
        }

        return result;
    }
};