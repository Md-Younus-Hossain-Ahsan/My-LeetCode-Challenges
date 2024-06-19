//1684. Count the Number of Consistent Strings

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        
        int count = 0;
        bool freq[26] = {false};

        for (char ch : allowed) 
        {
            freq[ch - 'a'] = true;
        }

        for (string& word : words) 
        {
            bool consistent = true;
            for (char ch : word) {
                if (!freq[ch - 'a']) 
                {
                    consistent = false;
                    break;
                }
            }
            if (consistent) 
                count++;
        }

        return count;

    }
};